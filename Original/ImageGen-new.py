#######################################################################################
# This script was inspired by the original code of VulCNN found in ImageGeneration.py #
# doi: https://doi.org/10.1145/3510003.3510229                                        #
#                                                                                     #
# Refer to https://graphviz.org/download/ for installation of graphviz                #
#                                                                                     #
# This script was tested with python version 3.10.12.                                 #
#######################################################################################

import networkx as nx
import numpy as np
import argparse
import os
import sent2vec
import pickle
import glob
from multiprocessing import Pool, cpu_count
from functools import partial
import pygraphviz as pgv

def parse_options():
    parser = argparse.ArgumentParser(description = 'Generate images from PDGs.')
    parser.add_argument('-i', '--input', help = 'The path of a dir which consists of some dot_files', required = True)
    parser.add_argument('-o', '--out', help = 'The output path.', required = True)
    parser.add_argument('-m', '--model', help='The sentence embedding model path', required = True)
    parser.add_argument('-d', '--debug', action='store_true', help='Enable debug mode (print to console)')
    args = parser.parse_args()
    return args

def sentence_embedding(sentence):
    if debug:
        print("====> Embedding sentence: " + sentence)
    emb = model.embed_sentence(sentence)
    return emb[0]

def parse_graph(dot):
    return nx.drawing.nx_pydot.read_dot(dot)

def generate_image(dot):
    try:
        pdg = parse_graph(dot)
        assert pdg
        
        labels_dict = nx.get_node_attributes(pdg, 'label')
        labels_code = dict()
        
        gv = pgv.AGraph(dot, strict = False, directed = True)
        G = nx.DiGraph(gv)
        G.add_nodes_from(pdg.nodes())
        G.add_edges_from(pdg.edges())
        
        degree_cen_dict = nx.degree_centrality(pdg)
        closeness_cen_dict = nx.closeness_centrality(pdg)
        katz_cen_dict = nx.katz_centrality(G)
        
        for label, all_code in labels_dict.items():
            code = all_code[all_code.index(",") + 1:-2].split('\\n')[0]
            code = code.replace("static void", "void")
            labels_code[label] = code

        degree_channel = []
        closeness_channel = []
        katz_channel = []

        for (label, code) in labels_code.items():
            line_vec = sentence_embedding(code)
            line_vec = np.array(line_vec)
    
            degree_cen = degree_cen_dict[label]
            degree_channel.append(degree_cen * line_vec)
    
            closeness_cen = closeness_cen_dict[label]
            closeness_channel.append(closeness_cen * line_vec)
    
            katz_cen = katz_cen_dict[label]
            katz_channel.append(katz_cen * line_vec)
        
        return (degree_channel, closeness_channel, katz_channel)
    except Exception as e:
        if debug:
            print("Error: ", e)
        return None

def export_image(dot, out, existing_files):  
    dot_name = dot.split('/')[-1].split('.dot')[0]
    
    if dot_name in existing_files:
        return None
    else:
        print("\n\n\n" + dot_name)
        channels = generate_image(dot)
        
        if channels == None:
            if debug:
                print("CHANNELS NONE")
            return None
        else:
            (degree_channel, closeness_channel, katz_channel) = channels
            out_pkl = out + dot_name + '.pkl'
            data = [degree_channel, closeness_channel, katz_channel]
            
            if debug:
                print("====> Dumping image to " + out_pkl)
                
            with open(out_pkl, 'wb') as f:
                pickle.dump(data, f)

def main():
    args = parse_options()
    input = args.input
    out = args.out
    model_path = args.model
    global model
    global debug
    
    if not os.path.exists(out):
        os.makedirs(out)
    
    model = sent2vec.Sent2vecModel()
    model.load_model(model_path)
    debug = args.debug
    
    if input[-1] == '/':
        input = input
    else:
        input += "/"

    if out[-1] == '/':
        out = out
    else:
        out += '/'
    
    files = glob.glob(input + '*.dot')
    
    existing_files = set([os.path.splitext(os.path.basename(f))[0] for f in glob.glob(os.path.join(out, '*.pkl'))])
    
    cores = cpu_count()
    pool = Pool(cores)
    
    pool.map(partial(export_image, out = out, existing_files = existing_files), files)
    
    model.release_shared_mem(model_path)

main()