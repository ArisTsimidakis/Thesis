# coding=utf-8
import os
import re
import shutil
import argparse
from clean_gadget import clean_gadget

def parse_options():
    parser = argparse.ArgumentParser(description='Normalization.')
    parser.add_argument('-i', '--input', help='The dir path of input dataset', type=str, required=True)
    args = parser.parse_args()
    return args

def has_subdirectories(path):
    for item in os.listdir(path):
        item_path = os.path.join(path, item)
        if os.path.isdir(item_path):
            print('Directory found:', item_path)
            return True
        
    return False

def normalize(path):
    if has_subdirectories(path):
        for setfolder in os.listdir(path):
            item_list = os.listdir(os.path.join(path, setfolder))
            for filename in item_list:
                filepath = os.path.join(path, setfolder, filename)
                print(filename)
                pro_one_file(filepath)
    else:
        for filename in os.listdir(path):
            filepath = os.path.join(path, filename)
            print(filename)
            pro_one_file(filepath)

def pro_one_file(filepath):
    with open(filepath, "r") as file:
        code = file.read()

    file.close()
    code = re.sub('(?<!:)\\/\\/.*|\\/\\*(\\s|.)*?\\*\\/', "", code)
    
    with open(filepath, "w") as file:
        file.write(code.strip())
    file.close()

    with open(filepath, "r") as file:
        org_code = file.readlines()
        
        nor_code = clean_gadget(org_code)
    file.close()
    with open(filepath, "w") as file:
        file.writelines(nor_code)
    file.close()

def main():
    args = parse_options()
    normalize(args.input)
    

if __name__ == '__main__':
    main()
 