import os
import sys
import shutil
import subprocess
import argparse

def parse_options():
    parser = argparse.ArgumentParser(description = "Extract and isolate all statements in kaybee that contain the source code of the commit")
    parser.add_argument("-i", "--input", type = str, help = "Path to the kaybee folder", required = True)
    parser.add_argument("-d", "--debug", action = 'store_true', help = "Print debug statements in console")
    return parser.parse_args()

def create_output_folder(input_path):
    output_path = os.path.join(input_path, "output")
    
    if not os.path.exists(output_path):
        os.makedirs(output_path)
        
        if debug:
            print(f"Created output folder: {output_path}")
        
    return output_path

def extract_tar_gz(source_path, destination_path):
    try:
        if debug:
            print(f"Extracting {source_path} to {destination_path}")
        subprocess.run(["tar", "-xvzf", source_path, "-C", destination_path], check=True)
    except Exception as e:
        print(f"Error extracting {source_path}: {e}")

def main():
    global debug
    args = parse_options()
    
    input_path = args.input
    debug = args.debug
    output_path = create_output_folder(input_path)
    
    if not os.path.exists(input_path):
        print("Input path does not exist")
        sys.exit(1)
    
    total_folders = 0
    extracted_folders = 0
    
    for folder_name in os.listdir(input_path):
        folder_path = os.path.join(input_path, folder_name)
        
        if not os.path.isdir(folder_path):
            if debug:
                print(f"{folder_path} is not a folder. Skipping...")
            continue
        
        total_folders += 1
        tar_gz_files = [file for file in os.listdir(folder_path) if file.endswith('.tar.gz')]
        
        for tar_gz_file in tar_gz_files:
            tar_gz_path = os.path.join(folder_path, tar_gz_file)
            extract_tar_gz(tar_gz_path, output_path)
            extracted_folders += 1
            
    print(f"Extracted {extracted_folders} / {total_folders} folders")
    print(f"{total_folders - extracted_folders} / {total_folders} folders do not contain source code")
    
main()

# Extracted 503 / 1298 folders
# 795 / 1298 folders do not contain source code