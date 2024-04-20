import os
import lap
import torch
import numpy
import pickle
import numpy as np
from torch import nn
from tqdm import tqdm
import torch.nn.functional as F
from prettytable import PrettyTable
from torch.cuda.amp import autocast
from torch.utils.data import Dataset
from torch.utils.data import DataLoader
from torch.utils.tensorboard import SummaryWriter
from sklearn.metrics import confusion_matrix
from transformers import AdamW, get_linear_schedule_with_warmup
from sklearn.metrics import precision_recall_fscore_support
import matplotlib.pyplot as plt
import seaborn as sns
import gc

def free_memory():
    gc.collect()
    
    if torch.cuda.is_available():
        torch.cuda.empty_cache()

def save_data(filename, data):
    print("Begin to save data：", filename)
    f = open(filename, 'wb')
    pickle.dump(data, f)
    f.close()

def load_data(filename):
    print("Begin to load data：", filename)
    f = open(filename, 'rb')
    data = pickle.load(f)
    f.close()
    return data

def get_accuracy(labels, prediction):    
    cm = confusion_matrix(labels, prediction)
    #sns.heatmap(cm, annot=True, fmt='d', cmap='Blues')
    def linear_assignment(cost_matrix):    
        _, x, y = lap.lapjv(cost_matrix, extend_cost=True)
        return np.array([[y[i], i] for i in x if i >= 0])
    def _make_cost_m(cm):
        s = np.max(cm)
        return (- cm + s)
    indexes = linear_assignment(_make_cost_m(cm))
    js = [e[1] for e in sorted(indexes, key=lambda x: x[0])]
    cm2 = cm[:, js]    
    accuracy = np.trace(cm2) / np.sum(cm2)
    return accuracy 

def get_MCM_score(labels, predictions):
    accuracy = get_accuracy(labels, predictions)
    precision, recall, f_score, support = precision_recall_fscore_support(labels, predictions, average = 'macro')
    
    MCM = confusion_matrix(labels, predictions)
    
    if len(MCM.shape) < 2 or MCM.shape[1] < 2:
        print("Error: Confusion matrix shape is not as expected.")
        return {}
    tn = MCM[0, 0]
    fp = MCM[0, 1]
    fn = MCM[1, 0] 
    tp = MCM[1, 1] 
    
    fpr_array = np.array( [fp / (fp + tn)] ) if (fp + tn) != 0 else np.array([0]) 
    fnr_array = np.array( [fn / (tp + fn)]) if (fn + tp) != 0 else np.array([0]) 
    f1_array = np.array( [2 * tp / (2 * tp + fp + fn)]) if (2 * tp + fp + fn) != 0 else np.array([0]) 
    sum_array = np.array( [fn + tp] )
    
    M_fpr = fpr_array.mean()
    M_fnr = fnr_array.mean()
    M_f1 = f1_array.mean()
    W_fpr = (fpr_array * sum_array).sum() / sum( sum_array ) if sum( sum_array ) != 0 else 0
    W_fnr = (fnr_array * sum_array).sum() / sum( sum_array ) if sum( sum_array ) != 0 else 0
    W_f1 = (f1_array * sum_array).sum() / sum( sum_array ) if sum( sum_array ) != 0 else 0
    
    return {
        "M_fpr": format(M_fpr * 100, '.3f'),
        "M_fnr": format(M_fnr * 100, '.3f'),
        "M_f1" : format(M_f1 * 100, '.3f'),
        "W_fpr": format(W_fpr * 100, '.3f'),
        "W_fnr": format(W_fnr * 100, '.3f'),
        "W_f1" : format(W_f1 * 100, '.3f'),
        "ACC"  : format(accuracy * 100, '.3f'),
        "MCM" : MCM
    }

class TraditionalDataset(Dataset):
    def __init__(self, texts, targets, max_len, hidden_size):
        self.texts = texts
        self.targets = targets
        self.max_len = max_len
        self.hidden_size = hidden_size

    def __len__(self):
        return len(self.texts)

    def __getitem__(self, idx):
        feature = self.texts[idx]
        target = self.targets[idx]
        vectors = numpy.zeros(shape=(3,self.max_len,self.hidden_size))
        for j in range(3):
            for i in range(min(len(feature[0]), self.max_len)):
                vectors[j][i] = feature[j][i]
        return {
            'vector': vectors,
            'targets': torch.tensor(target, dtype=torch.long)
        }

class TextCNN(nn.Module):
    def __init__(self, hidden_size):
        super(TextCNN, self).__init__()
        self.filter_sizes = (1, 2, 3, 4, 5, 6, 7, 8, 9, 10)           
        self.num_filters = 32                                        
        classifier_dropout = 0.1
        self.convs = nn.ModuleList(
            [nn.Conv2d(3, self.num_filters, (k, hidden_size)) for k in self.filter_sizes])
        self.dropout = nn.Dropout(classifier_dropout)
        num_classes = 2
        self.fc = nn.Linear(self.num_filters * len(self.filter_sizes), num_classes)

    def conv_and_pool(self, x, conv):
        x = F.relu(conv(x)).squeeze(3)
        x = F.max_pool1d(x, x.size(2)).squeeze(2)
        return x

    def forward(self, x):
        out = x.float()
        # out = out.unsqueeze(1)
        hidden_state = torch.cat([self.conv_and_pool(out, conv) for conv in self.convs], 1)
        out = self.dropout(hidden_state)
        out = self.fc(out)
        return out, hidden_state

class CNN_Classifier():
    def __init__(self, max_len=100, n_classes=2, epochs=100, batch_size = 32, learning_rate = 0.001, patience = 10, \
                    use_tensorboard = False, result_save_path = "Dataset-sard/test", item_num = 0, hidden_size = 128):
        self.model = TextCNN(hidden_size)
        self.device = torch.device("cuda" if torch.cuda.is_available() else "cpu")
        self.max_len = max_len
        self.epochs = epochs
        self.batch_size = batch_size
        self.learning_rate = learning_rate
        self.patience = patience
        self.model.to(self.device)
        self.hidden_size = hidden_size
        result_save_path = result_save_path + "/" if result_save_path[-1]!="/" else result_save_path
        if not os.path.exists(result_save_path): os.makedirs(result_save_path)
        self.result_save_path = result_save_path + str(item_num) + "_epo" + str(epochs) + "_bat" + str(batch_size) + ".result"
        self.model_save_path = os.path.join(result_save_path, "pytorch_files")
        if not os.path.exists(self.model_save_path): os.makedirs(self.model_save_path)
        self.use_tensorboard = use_tensorboard
        if self.use_tensorboard: 
            self.writer = SummaryWriter(log_dir = os.path.join(self.model_save_path, "tensorboard_logs"))

    def preparation(self, X_train,  y_train, X_valid, y_valid):
        # create datasets
        self.train_set = TraditionalDataset(X_train, y_train, self.max_len, self.hidden_size)
        self.valid_set = TraditionalDataset(X_valid, y_valid, self.max_len, self.hidden_size)

        # create data loaders
        self.train_loader = DataLoader(self.train_set, batch_size=self.batch_size, shuffle=True)
        self.valid_loader = DataLoader(self.valid_set, batch_size=self.batch_size, shuffle=True)

        # helpers initialization
        self.optimizer = AdamW(self.model.parameters(), lr=self.learning_rate, correct_bias=False)
        self.scheduler = get_linear_schedule_with_warmup(
            self.optimizer,
            num_warmup_steps=0,
            num_training_steps=len(self.train_loader) * self.epochs
        )
        self.loss_fn = torch.nn.CrossEntropyLoss().to(self.device)

    def fit(self, epoch):
        self.model = self.model.train()
        losses = []
        labels = []
        predictions = []
        scaler = torch.cuda.amp.GradScaler()
        progress_bar = tqdm(enumerate(self.train_loader), total = len(self.train_loader))
        for i, data in progress_bar:
            self.optimizer.zero_grad()
            vectors = data["vector"].to(self.device)
            targets = data["targets"].to(self.device)
            with autocast():
                outputs,_  = self.model( vectors )
                loss = self.loss_fn(outputs, targets)
                
            scaler.scale(loss).backward()
            scaler.step(self.optimizer)
            scaler.update()
            preds = torch.argmax(outputs, dim=1).flatten()       
            
            if self.use_tensorboard:
                self.writer.add_scalar('Training loss', loss.item(), epoch)
                self.writer.add_scalar('Training accuracy', torch.sum(preds == targets)/len(targets), epoch)
                
            losses.append(loss.item())
            predictions += list(np.array(preds.cpu()))   
            labels += list(np.array(targets.cpu()))      

            torch.nn.utils.clip_grad_norm_(self.model.parameters(), max_norm=1.0)

            self.scheduler.step()
            progress_bar.set_description(
                f'loss: {loss.item():.3f}, acc : {(torch.sum(preds == targets)/len(targets)):.3f}')
        
        labels = np.array(labels)
        predictions = np.array(predictions)
        
        if self.use_tensorboard:
            fig = self.plot_confusion_matrix(labels, predictions, normalize = True)
            self.writer.add_figure(f'Epoch training conf. matrix', fig, epoch)
        
        train_loss = np.mean(losses)
        score_dict = get_MCM_score(labels, predictions)
        return train_loss, score_dict
    
    def predict(self, X):
        self.model.eval()
        with torch.no_grad():
            X = X.to(self.device)
            out, _ = self.model(X.unsqueeze(0))
            probabilities = F.softmax(out, dim = 1)
            prediction = torch.argmax(probabilities, dim = 1).item()
        
        return prediction

    def eval(self, epoch):
        print("start evaluating...")
        self.model = self.model.eval()
        losses = []
        pre = []
        label = []
        correct_predictions = 0
        progress_bar = tqdm(enumerate(self.valid_loader), total=len(self.valid_loader))

        with torch.no_grad():
            for _, data in progress_bar:
                vectors = data["vector"].to(self.device)
                targets = data["targets"].to(self.device)
                outputs, _ = self.model(vectors)
                loss = self.loss_fn(outputs, targets)
                preds = torch.argmax(outputs, dim=1).flatten()
                correct_predictions += torch.sum(preds == targets)

                pre += list(np.array(preds.cpu()))
                label += list(np.array(targets.cpu()))
                
                losses.append(loss.item())
                progress_bar.set_description(
                f'loss: {loss.item():.3f}, acc : {(torch.sum(preds == targets)/len(targets)):.3f}')
        
        label = np.array(label)
        pre = np.array(pre)
        
        val_acc = correct_predictions.double() / len(self.valid_set)
        val_loss = np.mean(losses)
        
        if self.use_tensorboard:
            fig = self.plot_confusion_matrix(label, pre, normalize = True)
            self.writer.add_scalar('Validation loss', val_loss, epoch)
            self.writer.add_scalar('Validation accuracy', val_acc, epoch)
            self.writer.add_figure("Validation conf. matrix", fig, global_step = epoch)
                
        score_dict = get_MCM_score(label, pre)
        val_loss = np.mean(losses)
        return val_loss, score_dict

    
    def train(self):
        learning_record_dict = {}
        train_table = PrettyTable(['typ', 'epo', 'loss', 'M_fpr', 'M_fnr', 'M_f1', 'W_fpr', 'W_fnr', 'W_f1', 'ACC'])
        test_table = PrettyTable(['typ', 'epo', 'loss', 'M_fpr', 'M_fnr', 'M_f1', 'W_fpr', 'W_fnr', 'W_f1', 'ACC'])
        
        best_val_loss = np.inf
        epochs_without_improvement = 0
        
        for epoch in range(self.epochs):
            print(f'Epoch {epoch + 1}/{self.epochs}')
            train_loss, train_score = self.fit(epoch)
            for key in ['M_fpr', 'M_fnr', 'M_f1', 'W_fpr', 'W_fnr', 'W_f1', 'ACC']:
                if key not in train_score:
                    train_score[key] = ""
            train_table.add_row(["tra", str(epoch+1), format(train_loss, '.4f')] + [train_score[j] for j in train_score if j != "MCM"])
            print(train_table)

            val_loss, val_score = self.eval(epoch)
            for key in ['M_fpr', 'M_fnr', 'M_f1', 'W_fpr', 'W_fnr', 'W_f1', 'ACC']:
                if key not in val_score:
                    val_score[key] = ""
                    
            test_table.add_row(["val", str(epoch+1), format(val_loss, '.4f')] + [val_score[j] for j in val_score if j != "MCM"])
            print(test_table)
            print("\n")
            
            learning_record_dict[epoch] = {'train_loss': train_loss, 'val_loss': val_loss, "train_score": train_score, "val_score": val_score}
            save_data(self.result_save_path, learning_record_dict)
            
            if val_loss < best_val_loss:
                best_val_loss = val_loss
                epochs_without_improvement = 0
            else:
                epochs_without_improvement += 1
            
            if epochs_without_improvement > self.patience:
                print(f"Early stopping after epoch {epoch + 1}")
                break
            
            model_save_path = os.path.join(self.model_save_path, f"epoch_{str(epoch + 1)}.pt")
            torch.save(self.model.state_dict(), model_save_path)
            
            print("\n")
        
        free_memory()
        if self.use_tensorboard:
            self.writer.close()
    
    def plot_confusion_matrix(self, labels, predictions, normalize = False):
        cm = confusion_matrix(labels, predictions)
        if normalize:
            cm = cm.sum(axis = 1)[:, np.newaxis]
        
        fig, ax = plt.subplots()
        sns.heatmap(cm, annot = True, fmt = '.2f', cmap = 'Blues', ax = ax)
        ax.set_xlabel('Predicted labels')
        ax.set_ylabel('True labels')
        
        return fig
