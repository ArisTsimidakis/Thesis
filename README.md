#  Transferring an Image-Inspired Deep  Learning Vulnerability Detection System  from C to Java: A Targeted Reproduction of VulCNN

## Abstract 
This study is a targeted replication of a Deep Learning-based source code vul-
nerability detection system named VulCNN. VulCNN was originally designed
for classifying functions written in C, and this study extends its application
to Java. There are three main objectives to this research: (a) to evaluate the
performance of VulCNN in detecting vulnerabilities in C functions, (b) to as-
sess the impact of different sentence embedding techniques on the results of
the classification, and (c) to train a new VulCNN model for Java and deter-
mine if it achieves comparable accuracy when applied to different programming
languages and datasets.
To achieve these goals, a series of experiments was conducted on both the C
and Java implementations of VulCNN, focusing on the model’s performance in
classifying vulnerable functions. The experimental results indicate that both
implementations achieve similar accuracy levels, suggesting that the approach
is likely transferable to a range of programming languages with promising out-
comes. However, the results also reveal significant limitations: the synthetic
dataset used to train VulCNN does not provide sufficient diversity for the
model to effectively generalize and distinguish different vulnerability patterns.
This finding underscores the need for more comprehensive and varied training
datasets, utilizing source code from real-world products.


## Script usage 
### 1. Normalize source code

    python3 normalization.py -i Dataset-JULIET -l java

### 2. Parse Program Dependence Graphs

    python3 graph_gen_new.py -i Dataset-JULIET/Vul -o bins/Vul -t parse -lang java

### 3. Export Program Dependence Graphs

    python3 graph_gen_new.py -i bins/Vul -o dots/Vul -t export 

### 4. Generate images

    python3 ImageGen-new.py -i dots/Vul -o Images/Vul -m embedding-models/java_embedding.bin 

### 5. Split train/validation and testing data

    python3 generate_train_test_data.py -i Images -o train-test-data -n 5

### 6. Fit model

    python3 VulCNN.py -i train-test-data

### 7. Make predictions

    python3 VulCNN_predict.py -i folder_with_code_files -l java
    
