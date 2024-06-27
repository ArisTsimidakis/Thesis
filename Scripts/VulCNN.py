import argparse
from model import load_data, CNN_Classifier, free_memory
import os
# from memory_profiler import profile


def parse_options():
    parser = argparse.ArgumentParser(description='VulCNN training.')
    parser.add_argument('-i', '--input', help='The dir path of train.pkl and validation.pkl', type=str, required=True)
    parser.add_argument('-d', '--dataframe', type=int, choices=range(5), help='Index of the dataframe to use (0-4)')
    args = parser.parse_args()
    return args

def get_kfold_dataframe(path, item_num=0):
    path = path + "/" if path[-1] != "/" else path
    train_df = load_data(os.path.join(path, "train.pkl"))[item_num]
    eval_df = load_data(os.path.join(path, "validation.pkl"))[item_num]
    
    return train_df, eval_df

def train_model(data_path, item_num, hidden_size):
    train_df, eval_df = get_kfold_dataframe(data_path, item_num=item_num)
    save_path = os.path.join(data_path, str(item_num))
    
    if not os.path.exists(save_path):
        os.makedirs(save_path)
    
    classifier = CNN_Classifier(result_save_path=save_path, item_num=item_num, epochs=100, hidden_size=hidden_size)
    classifier.preparation(
        X_train=train_df['data'],
        y_train=train_df['label'],
        X_valid=eval_df['data'],
        y_valid=eval_df['label'],
    )
    
    classifier.train()
    free_memory()
    del classifier

# @profile
def main():
    args = parse_options()
    hidden_size = 128
    
    data_path = args.input
    dataframe_index = args.dataframe
    
    if dataframe_index:
        # Train only the specified dataframe
        train_model(data_path, dataframe_index, hidden_size)
    else:
        # Train all dataframes
        for item_num in range(5):
            train_model(data_path, item_num, hidden_size)

if __name__ == "__main__":
    main()
