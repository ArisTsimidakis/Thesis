#######################################################################################
# This script was inspired by the original code of VulCNN found in joern_graph_gen.py #
# doi: https://doi.org/10.1145/3510003.3510229                                        #
#                                                                                     #
# JDK 19 and Joern version 1.1.995 - 1.1.1125 are required.                           #
#                                                                                     #
# This script was tested with v1.1.1125.                                              #
#######################################################################################


import os
import argparse
from multiprocessing import Pool, cpu_count, Lock
import glob
from functools import partial
import subprocess
import shutil

lock = Lock()

def parse_options():
    parser = argparse.ArgumentParser(description='Extracting Cpgs.')
    parser.add_argument('-i', '--input', help='The dir path of input', type=str)
    parser.add_argument('-o', '--output', help='The dir path of output', type=str)
    parser.add_argument('-t', '--type', help='The type of procedures: parse or export', type=str, default='export')
    parser.add_argument('-r', '--repr', help='The type of representation: Currently only supports pgd', type = str, default = 'pdg')
    parser.add_argument('-l', '--log', metavar='LOG_FILE', help='Log file to redirect output to')
    parser.add_argument('-d', '--debug', action='store_true', help='Enable debug mode (print to console)')
    return parser.parse_args()

def find_and_move_pdg(in_dir, out_dir):
    name = os.path.splitext(os.path.basename(in_dir))[0]
    try:
        pdg_list = os.listdir(in_dir)
        for pdg in pdg_list:
            if pdg.startswith("1-pdg"):
                new_name = f'1-pdg-{name}.dot'
                shutil.move(os.path.join(in_dir, pdg), os.path.join(out_dir, new_name))
                
                shutil.rmtree(in_dir)
    except:
        pass
    
 

def parse(filepath, outdir):
    record_txt =  os.path.join(outdir, "parse_res.txt")
    
    if (log and (not os.path.exists(log))):
        with lock:
            os.system("touch " + log)
    
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
    
    out = outdir + filename + '.bin'
    if os.path.exists(out):
        return
    if debug:
        print(f"Parsing file {filepath} to {out}")
        
    cmd = f'joern-parse {filepath} --language c --output {out}'
    
    if log:
        with open(log, 'a+') as f:
            subprocess.run(cmd, shell=True, stdout = f, stderr = subprocess.STDOUT)
    else:
        with open(os.devnull, 'w') as devnull:
            subprocess.run(cmd, shell = True, stdout = devnull, stderr = subprocess.STDOUT)
    with lock:
        with open(record_txt, 'a+') as f:
            f.write(filename + '\n')
        
        
def export(bin_filepath, outdir, repr):
    record_txt =  os.path.join(outdir, "export_res.txt")
    
    if not os.path.exists(record_txt):
        os.system("touch " + record_txt)
        
    with open(record_txt, 'r') as f:
        rec_list = f.readlines()
        
    filename = os.path.splitext(os.path.basename(bin_filepath))[0]
    if filename + '\n' in rec_list:
        if debug:
            print(" ====> has been exported: ", filename)
        return
    
    if debug:
        print(' ----> now exporting: ', filename)
    
    out = outdir + filename
    if os.path.exists(out):
        return
    if debug:
        print(f"Exporting file {bin_filepath} to {out}")
    
    cmd = f'joern-export {bin_filepath} --repr {repr} --format dot --out {out}'
    
    if log:
        with open(log, 'a+') as f:
            subprocess.run(cmd, shell=True, stdout = f, stderr = subprocess.STDOUT)
    else:
        with open(os.devnull, 'w') as devnull:
            subprocess.run(cmd, shell = True, stdout = devnull, stderr = subprocess.STDOUT)
    
    find_and_move_pdg(out, outdir)
    
    with lock:
        with open(record_txt, 'a+') as f:
            f.write(filename + '\n')
    
def main():
    pool = Pool(16)
    
    args = parse_options()
    type = args.type
    repr = args.repr
    input_path = args.input
    output_path = args.output
    global log
    global debug
    log = args.log
    debug = args.debug
    
    if input_path[-1] == '/':
        input_path = input_path
    else:
        input_path += '/'

    if output_path[-1] == '/':
        output_path = output_path
    else:
        output_path += '/'
    
    cores = cpu_count()
    
    if not os.path.exists(output_path):
        os.makedirs(output_path)
    
    if type == 'parse':
        print("Initiating parsing. Input dir path is: " + input_path)
        files = glob.glob(input_path + '*.c')
        with Pool(cores) as pool:
            pool.map(partial(parse, outdir = output_path), files)
            
    elif type == 'export':
        print("Initiating exporting. Input dir path is: " + input_path)
        files = glob.glob(input_path + '*.bin')
        with Pool(cores) as pool:
            pool.map(partial(export, outdir = output_path, repr = repr), files)
            
    else:
        print("Invalid type. Please choose either 'parse' or 'export'.\n")


main()