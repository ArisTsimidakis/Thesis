# coding=utf-8
import os
import re
import argparse
from tqdm import tqdm
from clean_gadget import clean_gadget
from java_clean_gadget import java_clean_gadget

def parse_options():
    parser = argparse.ArgumentParser(description='Normalization of C or Java source code.')
    parser.add_argument('-i', '--input', help='The dir path of input dataset', type=str, required=True)
    parser.add_argument('-l', '--language', help='The dir path of input dataset', type=str, default='c')
    args = parser.parse_args()
    return args

def has_subdirectories(path):
    for item in os.listdir(path):
        item_path = os.path.join(path, item)
        if os.path.isdir(item_path):
            print('Directory found:', item_path)
            return True
    return False

def normalize(path, language):
    files = []
    print("Loading files...")

    if has_subdirectories(path):
        for setfolder in os.listdir(path):
            item_list = os.listdir(os.path.join(path, setfolder))
            for filename in item_list:
                filepath = os.path.join(path, setfolder, filename)
                files.append(filepath)
    else:
        for filename in os.listdir(path):
            filepath = os.path.join(path, filename)
            files.append(filepath)

    with tqdm(total=len(files), desc="Normalizing files") as pbar:
        for filepath in files:
            pbar.set_postfix({"Current file": os.path.basename(filepath)})
            pro_one_file(filepath, language)
            pbar.update(1)

def pro_one_file(filepath, language):
    with open(filepath, "r") as file:
        code = file.read()

    code = re.sub(r'//.*|/\*[\s\S]*?\*/', "", code)
    
    with open(filepath, "w") as file:
        file.write(code.strip())

    with open(filepath, "r") as file:
        org_code = file.readlines()
        
    nor_code = java_clean_gadget(org_code) if language == 'java' else clean_gadget(org_code)
    
    with open(filepath, "w") as file:
        file.writelines(nor_code)

def main():
    args = parse_options()
    normalize(args.input, args.language.lower())

if __name__ == '__main__':
    main()
