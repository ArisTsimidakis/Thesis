#  Transferring an Image-Inspired Deep  Learning Vulnerability Detection System  from C to Java: A Targeted Reproduction of VulCNN

## Abstract 
This study is a targeted replication of a Deep Learning-based source code vulnerability detection system VulCNN, originally designed for C, and extends its application to Java. there are three main objectives to this research: a) to evaluate the accuracy and scalability of VulCNN in detecting vulnerabilities in C functions, b) to assess the impact of different sentence embedding techniques on the classification of source code, and c) to train a new VulCNN model for Java and determine if it achieves comparable accuracy when applied to different programming languages and datasets. 
To achieve these goals, a series of experiments was conducted on both the C and Java implementations of VulCNN, focusing on their performance in classifying vulnerable functions. The experimental results indicate that both implementations achieve similar accuracy levels, which suggests that the approach is likely applicable to a range of programming languages with promising outcomes. However, the results also reveal that sentence embedding methods are not transferable across different programming languages. Consequently, it appears challenging to develop a universal model that is capable of generalizing vulnerability patterns across multiple programming languages while capturing the semantics of source code through sentence embedding without creating a multi-language dataset.  

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
    
