# Description
 An attempt to reproduce VulCNN (https://github.com/CGCL-codes/VulCNN) for Java vulnerabilities using the ProjectKB dataset (https://github.com/SAP/project-kb)

# SARD Dataset Analysis

The dataset contains the following entries of vulnerable functions:
|         Vulnerability type          |    Number of entries    |
|-------------------------------------|-------------------------|
| Stack-based buffer overflow         | 3560                    | 
| Uncotrolled format string           | 2208                    |
| Heap-based buffer overflow          | 2122                    |
| Buffer Underwrite                   | 1230                    | 
| Buffer Under-read                   | 1015                    |
| OS command injection                | 963                     |
| Buffer Over-read                    | 682                     | 
| Signed to unsigned conversion error | 468                     |
| Unexpected sign extension           | 24                      |
| Free memory not on heap             | 15                      |
| Null dereference from return        | 15                      | 
| Nummeric truncation error           | 1                       |

It also contains 21.057 entries of secure functions.

# Notes

## General
1. Only 503/1298 entries in ProjectKB actually contain source code (extract_kaybee) script
2. These folders contain the entire commit, including other possible files that might have been modified
3. In some cases one vulnerability spans across multiple files, and the change might just be the addition of one line of code
4. If we want to research the dataset, then ok. If we want to create a working product, then this is not the way to go.
5. Used their own model for sentence embedding, found pre-trained one online 
6. Have to figure out java normalization



## Normalization
This script worked out of the box. Nothing had to be changed for the original replication

## Graph extraction
1. Added logging/debug options
2. Removed the need for changes in environment variables
3. Dynamically determine number of cpu cores for multiprocessing

## Image Generation
1. Added logging/debug options
2. Dynamically determine number of cpu cores for multiprocessing
3. Use pygraphviz to directly load .dot files
4. Simplify directory/path handling

## Train-test data generation
1. Used Stratified K-fold instead of regular K-fold to ensure proper data/label distribution among the different folds. Before that, some folds only contained 0s and others only 1s, so validation could not be accurate
2. Added debug option

## Model
1. Added ```predict()``` method to facilitate making future predictions with the trained model
2. Added ```model_save_path``` attribute. Now the architecture of each model is saved after each epoch in a .pt file for easy loading after the training is done.
3. Wrote 'find_best_model.py' script, which selects the model that performed the best out of all the models/epochs, and saves the object in a .pkl file. This allows for direct use of the model in production, for making future predictions on unseen data.

## Testing
### 1. With the orignal dataset
- 8928 out of 12303 vulnerable files classified as vulnerable (~72.6%)
- 18894 out of 21052 non-vulnerable files classified as non-vulnerable (~89.75%)

Following is a more extensive analysis of how the model performs for each of the different vulnerability types in the dataset:

|         Vulnerability type          |    Correctly predicted  | Percentage |
|-------------------------------------|-------------------------|------------|
| Stack-based buffer overflow         | 2127 / 3560             | 59.75%     |
| Uncotrolled format string           | 1467 / 2208             | 66.44%     |
| Heap-based buffer overflow          | 1345 / 2122             | 63.38%     |
| Buffer Under-write                  | 1142 / 1230             | 92.85%     | 
| Buffer Under-read                   | 985 / 1015              | 97.04%     |
| OS command injection                | 840 / 963               | 87.23%     | 
| Buffer Over-read                    | 564 / 682               | 82.7%      | 
| Signed to unsigned conversion error | 418 / 468               | 89.32%     |
| Unexpected sign extension           | 16 / 24                 | 66%        |
| Free memory not on heap             | 13 / 15                 | 86.66%     |
| Null dereference from return        | 10 / 15                 | 66.67%     | 
| Nummeric truncation error           | 1 / 1                   | 100 %      |


### 2. With a different dataset/unseen functions (?)
|         Vulnerability type          |    Correctly predicted  | Percentage |
|-------------------------------------|-------------------------|------------|
| Stack-based buffer overflow         | 5 / 11                  | 45.45%     |
| Uncotrolled format string           | 8 / 10                  | 80%        |
| Heap-based buffer overflow          | 4 / 10                  | 40%        |
| Buffer Underwrite                   | 8 / 10                  | 80%        |
| Buffer Under-read                   | 10 / 11                 | 90.91%     |
| OS command injection                | 3 / 10                  | 30%        |
| Buffer Over-read                    | 6 / 10                  | 60%        |
| Signed to unsigned conversion error | 5 / 10                  | 50%        |
| Unexpected sign extension           | 3 / 11                  | 27.28%     |
| Free memory not on heap             | 4 / 10                  | 40%        |
| Null dereference from return        |                         | 
| Nummeric truncation error           |                         |
