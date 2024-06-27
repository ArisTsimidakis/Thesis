#######################################################################################
# This script was inspired by the original code of VulCNN                             #
# doi: https://doi.org/10.1145/3510003.3510229                                        #
#                                                                                     #
# original script: https://github.com/CGCL-codes/VulCNN/blob/main/joern_graph_gen.py  #
#                                                                                     #
# This script was tested with python version 3.10.12.                                 #
#######################################################################################

import sys
import os
import argparse
from multiprocessing import Pool, cpu_count, Lock
import glob
from functools import partial
import subprocess
import shutil
from tqdm import tqdm

lock = Lock()

def parse_options():
    parser = argparse.ArgumentParser(description='Extracting Cpgs.')
    parser.add_argument('-i', '--input', help='The dir path of input', type = str, required = True)
    parser.add_argument('-o', '--output', help = 'The dir path of output', type = str, required = True)
    parser.add_argument('-t', '--type', help='The type of procedures: parse or export', type = str, default='export', required = True)
    parser.add_argument('-lang', '--language', help='The language of the code files (only java and c supported). Default: c', type = str, default = 'c')
    parser.add_argument('-r', '--repr', help='The type of representation: Currently only supports pdg', type = str, default = 'pdg')
    parser.add_argument('-d', '--debug', action='store_true', help='Enable debug mode (print to console)')
    return parser.parse_args()

def find_and_move_pdg(in_dir, out_dir, filename):
    try:
        pdg_list = os.listdir(in_dir)
        for pdg in pdg_list:
            if language == 'c' and pdg.startswith("1-pdg"):
                new_name = f'1-pdg-{filename}.dot'
                shutil.move(os.path.join(in_dir, pdg), os.path.join(out_dir, new_name))
                shutil.rmtree(in_dir)
            elif pdg.startswith("0-pdg"):
                new_name = f'0-pdg-{filename}.dot'
                shutil.move(os.path.join(in_dir, pdg), os.path.join(out_dir, new_name))
                shutil.rmtree(in_dir)
    except Exception as e:
        print(f"Error in find_and_move_pdg: {e}")
    
def parse(filepath, outdir):
    record_txt = os.path.join(outdir, "parse_res.txt")
    
    if not os.path.exists(record_txt):
        with lock:
            os.system("touch " + record_txt)
        
    with open(record_txt, 'r') as f:
        rec_list = f.readlines()
        
    filename = os.path.splitext(os.path.basename(filepath))[0]
    if filename + '\n' in rec_list:
        if debug:
            print(" ====> has been processed: ", filename)
        return
    
    if debug:
        print(' ----> now processing: ', filename)
    
    out = os.path.join(outdir, f'{filename}.bin')
    if os.path.exists(out):
        return
    if debug:
        print(f"Parsing file {filepath} to {out}")
        
    lang = 'c' if language == 'c' else 'javasrc'
    cmd = f'joern-parse {filepath} --language {lang} --output {out}'
    
    
    with open(os.devnull, 'w') as devnull:
        subprocess.run(cmd, shell=True, stdout=devnull, stderr=subprocess.STDOUT)
    
    with lock:
        with open(record_txt, 'a+') as f:
            f.write(filename + '\n')

def export(bin_filepath, outdir, repr):
    record_txt = os.path.join(outdir, "export_res.txt")
    
    if not os.path.exists(record_txt):
        os.system("touch " + record_txt)
        
    with open(record_txt, 'r') as f:
        rec_list = f.readlines()
        
    filename = os.path.splitext(os.path.basename(bin_filepath))[0] + '.dot'
    if filename + '\n' in rec_list:
        if debug:
            print(" ====> has been exported: ", filename)
        return
    
    out = os.path.join(outdir, filename)
    
    if debug:
        print(f"\n====> Exporting file {bin_filepath} to {out}\n")
    
    cmd = f'joern-export {bin_filepath} --repr {repr} --format dot --out {out}' 
    
   
    with open(os.devnull, 'w') as devnull:
        subprocess.run(cmd, shell=True, stdout=devnull, stderr=subprocess.STDOUT)
    
    find_and_move_pdg(out, outdir, filename)
    
    with lock:
        with open(record_txt, 'a+') as f:
            f.write(filename + '\n')

def process_files(files, outdir, process_function, desc):
    with tqdm(total=len(files), desc=desc) as pbar:
        pool = Pool(cpu_count())
        for _ in pool.imap_unordered(partial(process_function, outdir=outdir), files):
            pbar.update(1)
        pool.close()
        pool.join()

def main():
    global debug
    global language
    
    args = parse_options()
    
    type = args.type
    repr = args.repr
    input_path = args.input
    output_path = args.output
    language = args.language
    debug = args.debug
    
    if not (language == 'c' or language == 'java'):
        print(f"ERROR: Language {language} not supported. Available options: ['c', 'java']")
        sys.exit(0)

    input_path = input_path + '/' if input_path[-1] != '/' else input_path
    output_path = output_path + '/' if output_path[-1] != '/' else output_path
    
    if not os.path.exists(output_path):
        os.makedirs(output_path)
    
    if type == 'parse':
        print("Initiating parsing. Input dir path is: " + input_path)
        files = glob.glob(os.path.join(input_path, '*.c')) if language == 'c' else glob.glob(os.path.join(input_path, '*.java'))
        process_files(files, output_path, parse, "Parsing files")
            
    elif type == 'export':
        print(f"\n\nInitiating exporting. Input dir path is: {input_path}\n")
        files = glob.glob(os.path.join(input_path, '*.bin'))
        process_files(files, output_path, partial(export, repr=repr), "Exporting files")
        
    else:
        print("Invalid type. Please choose either 'parse' or 'export'.\n")

if __name__ == '__main__':
    main()
