import glob
import pickle
import argparse
import os
import pickle
from model import CNN_Classifier
import torch

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

def get_best_model(path):
    best_epoch = None
    best_item_num = None
    best_val_loss = float('inf')
    best_accuracy = 0.0
    
    for folder in os.listdir(path):
        folder_path = os.path.join(path, folder)
        if not os.path.isdir(folder_path):
            continue
        
        for res_file in glob.glob(folder_path + "/*.result"):
            filename = res_file.split('/')[-1].split('.')[0]
            data = load_data(res_file)
            
            for epoch, contents in data.items():
                val_loss = contents['val_loss']
                acc = contents['val_score']['ACC']
                
                if val_loss < best_val_loss or (val_loss == best_val_loss and acc > best_accuracy):
                    best_epoch = epoch
                    best_val_loss = val_loss
                    best_accuracy = acc
                    best_item_num = filename[0]
    
    return (best_epoch, best_val_loss, best_accuracy, best_item_num)
    
def main():
    args = parse_options()

    path = args.input

    best_epoch, best_val_loss, best_accuracy, best_item_num = get_best_model(path)
        
    filename = f"epoch_{best_epoch}.pt"
    best_model_path = os.path.join(path, best_item_num, "pytorch_files", filename)
    

    print("Best file: ", best_item_num)
    print("Best epoch: ", best_epoch)
    print("Best val loss: ", best_val_loss)
    print("Best accuracy: ", best_accuracy)
    
    classifier = load_model(best_model_path)

    save_model(classifier, os.path.join(path, "best_model.pkl"))
    
main()
