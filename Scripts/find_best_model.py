import glob
import pickle
import argparse
import os
import pickle
from model import CNN_Classifier
import torch
from prettytable import PrettyTable

def parse_options():
    parser = argparse.ArgumentParser(description = 'Find the best model and epoch out of the k trained models.')
    parser.add_argument('-i', '--input', help = 'The path of a directory which consists of the folders of all k models', required = True)
    args = parser.parse_args()
    return args

def load_data(filepath):
    print("Loading data:", filepath)
    with open(filepath, 'rb') as f:
        data = pickle.load(f)
    return data

def save_model(model, path):
    print("Saving model:", path)
    with open(path, 'wb') as f:
        pickle.dump(model, f)

def load_model(model_path):
    classifier = CNN_Classifier()
    
    try:
        classifier.model.load_state_dict(torch.load(model_path))
    except Exception as e:
        print("Error loading model:", e)
        return
    
    return classifier

def get_lowest_fnr(path):
    best_epoch = None
    best_item_num = None
    lowest_fnr = float('inf')
    
    for folder in os.listdir(path):
        folder_path = os.path.join(path, folder)
        
        if not os.path.isdir(folder_path):
            continue
        
        for res_file in glob.glob(folder_path + "/*.result"):
            filename = res_file.split('/')[-1].split('.')[0]
            data = load_data(res_file)
            
            for epoch, contents in data.items():
                fnr = float(contents['val_score']['M_fnr'])
                if fnr < lowest_fnr:
                    best_epoch = epoch
                    lowest_fnr = fnr
                    best_item_num = filename[0]
    
    return (best_epoch, best_item_num, lowest_fnr)

def get_lowest_fpr(path):
    best_epoch = None
    best_item_num = None
    lowest_fpr = float('inf')
    
    for folder in os.listdir(path):
        folder_path = os.path.join(path, folder)
        
        if not os.path.isdir(folder_path):
            continue
        
        for res_file in glob.glob(folder_path + "/*.result"):
            filename = res_file.split('/')[-1].split('.')[0]
            data = load_data(res_file)
            
            for epoch, contents in data.items():
                fpr = float(contents['val_score']['M_fpr'])
                if fpr < lowest_fpr:
                    best_epoch = epoch
                    lowest_fpr = fpr
                    best_item_num = filename[0]
    
    return (best_epoch, best_item_num, lowest_fpr)

def get_best_f1_score(path):
    best_epoch = None
    best_item_num = None
    best_f1 = 0
    
    for folder in os.listdir(path):
        folder_path = os.path.join(path, folder)
        
        if not os.path.isdir(folder_path):
            continue
        
        for res_file in glob.glob(folder_path + "/*.result"):
            filename = res_file.split('/')[-1].split('.')[0]
            data = load_data(res_file)
            
            for epoch, contents in data.items():
                f1 = float(contents['val_score']['M_f1'])
                if f1 > best_f1:
                    best_epoch = epoch
                    best_f1 = f1
                    best_item_num = filename[0]
    
    return (best_epoch, best_item_num, best_f1)    

def get_best_loss(path):
    best_epoch = None
    best_item_num = None
    best_val_loss = float('inf')
    
    for folder in os.listdir(path):
        folder_path = os.path.join(path, folder)
        
        if not os.path.isdir(folder_path):
            continue
        
        for res_file in glob.glob(folder_path + "/*.result"):
            filename = res_file.split('/')[-1].split('.')[0]
            data = load_data(res_file)
            
            for epoch, contents in data.items():
                val_loss = contents['val_loss']
                
                if val_loss < best_val_loss:
                    best_epoch = epoch
                    best_val_loss = val_loss
                    best_item_num = filename[0]
    
    return (best_epoch, best_item_num, best_val_loss)

def get_best_accuracy(path):
    best_epoch = None
    best_item_num = None
    best_acc = 0
    
    for folder in os.listdir(path):
        folder_path = os.path.join(path, folder)
        
        if not os.path.isdir(folder_path):
            continue
        
        for res_file in glob.glob(folder_path + "/*.result"):
            filename = res_file.split('/')[-1].split('.')[0]
            data = load_data(res_file)
            
            for epoch, contents in data.items():
                acc = float(contents['val_score']['ACC'])
                if acc > best_acc:
                    best_epoch = epoch
                    best_acc = acc
                    best_item_num = filename[0]
    
    return (best_epoch, best_item_num, best_acc)     
    
def main():
    args = parse_options()

    path = args.input
    
    best_epoch_fpr, best_item_num_fpr, lowest_fpr = get_lowest_fpr(path)
    best_epoch_fnr, best_item_num_fnr, lowest_fnr = get_lowest_fnr(path)
    best_epoch_f1, best_item_num_f1, best_f1 = get_best_f1_score(path)
    best_epoch_loss, best_item_num_loss, best_loss = get_best_loss(path)
    best_epoch_acc, best_item_num_acc, best_acc = get_best_accuracy(path)
        
    fpr_filename = f"epoch_{best_epoch_fpr}.pt"
    fnr_filename  = f"epoch_{best_epoch_fnr}.pt"
    f1_filename = f"epoch_{best_epoch_f1}.pt"
    loss_filename = f"epoch_{best_epoch_loss}.pt"
    acc_filename = f"epoch_{best_epoch_acc}.pt"
    
    best_fpr_path = os.path.join(path, best_item_num_fpr, "pytorch_files", fpr_filename)
    best_fnr_path = os.path.join(path, best_item_num_fnr, "pytorch_files", fnr_filename)
    best_f1_path = os.path.join(path, best_item_num_f1, "pytorch_files", f1_filename)
    best_loss_path = os.path.join(path, best_item_num_loss, "pytorch_files", loss_filename)
    best_acc_path = os.path.join(path, best_item_num_acc, "pytorch_files", acc_filename)
    
    table = PrettyTable(['Metric', 'Fold', 'Epoch', 'Value'])
    table.add_row(['fpr', str(best_item_num_fpr), str(best_epoch_fpr), format(lowest_fpr, '.3f')])
    table.add_row(['fnr', str(best_item_num_fnr), str(best_epoch_fnr), format(lowest_fnr, '.3f')])
    table.add_row(['f1 score', str(best_item_num_f1), str(best_epoch_f1), format(best_f1, '.3f')])
    table.add_row(['val_loss', str(best_item_num_loss), str(best_epoch_loss), format(best_loss, '.3f')])
    table.add_row(['acc', str(best_item_num_acc), str(best_epoch_acc), format(best_acc, '.3f')])
    
    print(table)
    
    best_fpr_classifier = load_model(best_fpr_path)
    best_fnr_classifier = load_model(best_fnr_path)
    best_f1_classifier = load_model(best_f1_path)
    best_loss_classifier = load_model(best_loss_path)
    best_acc_classifier = load_model(best_acc_path)
    

    save_model(best_fpr_classifier, os.path.join(path, "best_fpr_model.pkl"))
    save_model(best_fnr_classifier, os.path.join(path, "best_fnr_model.pkl"))
    save_model(best_f1_classifier, os.path.join(path, "best_f1_model.pkl"))
    save_model(best_loss_classifier, os.path.join(path, "best_loss_model.pkl"))
    save_model(best_acc_classifier, os.path.join(path, "best_acc_model.pkl"))
    
main()
