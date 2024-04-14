import pickle
import os
import glob
import argparse
import pandas as pd
from sklearn.model_selection import StratifiedKFold
from collections import Counter


def save_data(filename, data):
    if debug:
        print("Saving data:", filename)
        
    with open(filename, 'wb') as f:
        pickle.dump(data, f)

def load_data(filename):
    if debug:
        print("Loading data:", filename)
        
    with open(filename, 'rb') as f:
        data = pickle.load(f)
        
    return data

def parse_options():
    parser = argparse.ArgumentParser(description = 'Generate and split the dataset into train-test data')
    parser.add_argument('-i', '--input', help = 'The path of a directory which consists of the folders containing the Vul and Not-Vul .pkl files.', required = True)
    parser.add_argument('-o', '--out', help='The output path.', required = True)
    parser.add_argument('-n', '--num', help='Num of K-fold.', required = True, type = int)
    parser.add_argument('-d', '--debug', help = 'Debug mode.', action = 'store_true')
    args = parser.parse_args()
    return args

def generate_dataframe(input_path, save_path):
    if not os.path.exists(save_path):
        os.makedirs(save_path)
        
    dic = []
    for type_name in os.listdir(input_path):
        dicname = input_path + type_name
        filename = glob.glob(dicname + "/*.pkl")
        for file in filename:
            data = load_data(file)
            dic.append({
                "filename": file.split("/")[-1].rstrip(".pkl"), 
                "length":   len(data), 
                "data":     data, 
                "label":    0 if type_name == "No-Vul" else 1})
            
    final_dic = pd.DataFrame(dic)
    save_data(save_path + "all_data.pkl", final_dic)

def split_data(all_data_path, save_path, kfold_num):
    df_test = load_data(all_data_path)
    seed = 0
    df_dict = {}
    train_dict = {i:{} for i in range(kfold_num)}
    test_dict = {i:{} for i in range(kfold_num)}
    kf = StratifiedKFold(n_splits = kfold_num, shuffle = True, random_state = seed)
    
    for i in Counter(df_test.label.values):
        df_dict[i] = df_test[df_test.label == i]
        for epoch, result in enumerate(kf.split(df_dict[i]['data'], df_dict[i]['label'])):
            train_dict[epoch][i]  = df_dict[i].iloc[result[0]]
            test_dict[epoch][i] =  df_dict[i].iloc[result[1]] 
            
    train_all = {i:pd.concat(train_dict[i], axis = 0, ignore_index=True) for i in train_dict}
    test_all = {i:pd.concat(test_dict[i], axis = 0, ignore_index=True) for i in test_dict}
    
    save_data(save_path + "train.pkl", train_all)
    save_data(save_path + "test.pkl", test_all)

def main():
    args = parse_options()
    global debug
    
    input_path = args.input
    output_path = args.out
    kfold_num = args.num
    debug = args.debug
    
    input_path = input_path + "/" if input_path[-1] != "/" else input_path
    output_path = output_path + "/" if output_path[-1] != "/" else output_path
    
    generate_dataframe(input_path, output_path)
    
    save_path = os.path.join(output_path, "all_data.pkl")
 
    split_data(save_path, output_path, kfold_num)

main()