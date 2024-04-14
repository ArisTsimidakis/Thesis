from normalization import normalize
import argparse
import os
import subprocess
import pickle
import torch
from model import CNN_Classifier


def parse_options():
    parser = argparse.ArgumentParser(description = 'Classifies the provided C functions as vulnerable or not.')
    parser.add_argument('-i', '--input', help = 'The path of a directory which consists of C files', required = True)
    parser.add_argument('-d', '--debug', action = 'store_true', default = False, help = 'Enable debug mode (print to console)')
    parser.add_argument('-p', '--preprocessed', action = 'store_true', default = False, help = 'Indicate that the input is already preprocessed. In this case, the input directory should contain the images')

    args = parser.parse_args()
    return args

def load_data(filepath):
    if debug:
        print("Loading data:", filepath)
    with open(filepath, 'rb') as f:
        data = pickle.load(f)
    return data

def load_model():
    model_path = "best_model/best_model.pkl"
    
    model = load_data(model_path)
    
    return model
    

def extract_function_graph(path):
    print("Extracting function graphs...\n\n")
    bins_dir = os.path.join(path, 'bins')    
    dots_dir = os.path.join(path, 'dots')
    
    parse_cmd = f"python3 graph_gen_new.py -i {path} -o {bins_dir} -t parse"
    export_cmd = f"python3 graph_gen_new.py -i {bins_dir} -o {dots_dir} -t export -r pdg"
    
    if debug:
        parse_cmd += " -d"
        export_cmd += " -d"
    
    subprocess.run(parse_cmd, shell=True)
    subprocess.run(export_cmd, shell=True)

def generate_images(path):
    print("Generating images...\n\n")
    output_dir = os.path.join(path, 'images')
    dots_dir = os.path.join(path, 'dots')
    model_path = "embedding-model/data_model.bin"
    
    cmd = f"python3 ImageGen-new.py -i {dots_dir} -o {output_dir} -m {model_path}"
    if debug:
        cmd += " -d"
    
    subprocess.run(cmd, shell = True)

def preprocess(data):
    vectors = torch.zeros(3, max_len, hidden_size)
    for i in range(3):
        for j in range (min(len(data[0]), max_len)):
            vectors[i,j] = torch.tensor(data[i][j], dtype = torch.float)
    
    return vectors.to(device)

def load_and_predict(path):
    total_files = 0
    vulnerable_files = 0
    files = [f for f in os.listdir(path) if f.endswith('.pkl')]
    
    for filename in files:
        total_files += 1
        prediction = None
        filepath = os.path.join(path, filename)
        
        data = load_data(filepath)    
        data = preprocess(data)
        try:
            prediction = classifier.predict(data)
        except Exception as e:
            print(f"Error classifying file {filename}: {e}")
        
        if prediction == 1:
            vulnerable_files += 1
        
        res = "Vulnerable" if prediction == 1 else "Not Vulnerable"
        output = f"File {filename} is: {res}, Prediction: {prediction}\n"
        
        print(output)
    
    print(f"{vulnerable_files} out of {total_files} files are vulnerable.")
        

def main():
    args = parse_options()
    global debug
    
    global max_len
    global hidden_size
    global device
    global classifier 
    
    path = args.input
    debug = args.debug
    is_preprocessed = args.preprocessed
    
    try:
        classifier = load_model()
        
        max_len = classifier.max_len
        hidden_size = classifier.hidden_size
        device = classifier.device
        
        if not is_preprocessed:
            normalize(path)
            
            extract_function_graph(path)
            
            generate_images(path)
        
        images_path = os.path.join(path, 'images') if not is_preprocessed else path
        load_and_predict(images_path)
        
    except Exception as e:
        print("Error: ", e)

main()