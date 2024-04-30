import os
import yaml
import shutil
import logging
import argparse
from multiprocessing import Pool, cpu_count
from functools import partial
from git import Repo
from git.exc import GitCommandError, InvalidGitRepositoryError

def configure_logging(verbose):
    level = logging.DEBUG if verbose else logging.INFO
    logging.basicConfig(level = level, format = '%(asctime)s - %(levelname)s - %(message)s')

def parse_options():
    parser = argparse.ArgumentParser(description='Scrape commits for each vulnerability.')
    parser.add_argument('-i', '--input', help='The dir path of the YAML files', type=str, required=True)
    parser.add_argument('-v', '--verbose', action='store_true', help='Print verbose output')
    return parser.parse_args()

def load_commits_from_yaml(yaml_file):
    try:
        with open(yaml_file, 'r') as f:
            data = yaml.safe_load(f)
            return [(fix['commits'][0]['repository'], fix['commits'][0]['id']) for fix in data['fixes']]
    except (yaml.YAMLError, KeyError) as e:
        logging.error(f"Error in {yaml_file}: {e}")
        return []

def clean_repository(repo, repo_path):
    if repo:
        repo.git.checkout('HEAD')
        shutil.rmtree(repo_path)
        logging.info(f"Cleaned up repository at {repo_path}.")

def find_prev_commit(commit, filenames):
    for past_commit in commit.iter_parents():
        if any(os.path.basename(f) in filenames for f in past_commit.stats.files):
            return past_commit
    logging.info(f"No previous commits found for {commit}.")
    return None

def copy_files(repo, commit_files, path, filenames = None):
    for file in commit_files:
        if filenames and os.path.basename(file) not in filenames: 
            continue
        
        file_path = os.path.join(repo.working_dir, file)
        shutil.copy(file_path, os.path.join(path, os.path.basename(file)))
    

def extract_files_from_commit(commit, repo, after_path, before_path):
    filenames = [os.path.basename(f) for f in commit.stats.files]
    repo.git.checkout(commit)
    copy_files(repo, commit.stats.files, after_path)
    
    prev_commit = find_prev_commit(commit, filenames)
    if prev_commit:
        repo.git.checkout(prev_commit)
        copy_files(repo, prev_commit.stats.files, before_path, filenames = filenames)

def process_repository(repo_url, commit_id, subdir_path):
    repo_path = os.path.join(subdir_path, 'repo')
    before_path = os.path.join(subdir_path, 'before')
    after_path = os.path.join(subdir_path, 'after')
    
    try:
        repo = Repo.clone_from(repo_url, repo_path) if not os.path.exists(repo_path) else Repo(repo_path)
        commit = repo.commit(commit_id)
        os.makedirs(before_path, exist_ok = True)
        os.makedirs(after_path, exist_ok = True)
        
        extract_files_from_commit(commit, repo, after_path, before_path)
    except (GitCommandError, InvalidGitRepositoryError) as e:
        raise Exception(f"Git operation failed: {e}")
    finally:
        clean_repository(repo, repo_path)

def scrape_commits(base_dir):
    for subdir in os.listdir(base_dir):
        subdir_path = os.path.join(base_dir, subdir)
        if os.path.isdir(subdir_path):
            yaml_file = next((f for f in os.listdir(subdir_path) if f.endswith('.yaml')), None)
            if (not yaml_file) or (any(f.endswith('tar.gz') for f in os.listdir(subdir_path)) or any(len(f) > 15 for f in os.listdir(subdir_path))):
                continue
            logging.info(f"Processing {yaml_file} in {subdir_path}.")
            commits = load_commits_from_yaml(os.path.join(subdir_path, yaml_file))
            for repo_url, commit_id in commits:
                before_path = os.path.join(subdir_path, commit_id, 'before')
                after_path = os.path.join(subdir_path, commit_id, 'after')
                process_repository(repo_url, commit_id, subdir_path)

def main():
    args = parse_options()
    
    input = [args.input]
    verbose = args.verbose
    
    configure_logging(verbose)
    
    cores = cpu_count()
    pool = Pool(cores)
    
    pool.map(partial(scrape_commits), input)

if __name__ == '__main__':
    main()
