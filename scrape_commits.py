# 1: Multiprocessing



import os
import yaml
import shutil
import argparse
from git import Repo
from git.exc import GitCommandError, InvalidGitRepositoryError

def parse_options():
    parser = argparse.ArgumentParser(description='Scrape commits for each vulnerability.')
    parser.add_argument('-i', '--input', help='The dir path of the YAML files', type=str, required=True)
    parser.add_argument('-v', '--verbose', action='store_true', help='Print verbose output')
    return parser.parse_args()

def extract_commits(yaml_file):
    try:
        with open(yaml_file, 'r') as f:
            data = yaml.safe_load(f)
            return [(fix['commits'][0]['repository'], fix['commits'][0]['id']) for fix in data['fixes']]
    except yaml.YAMLError as e:
        raise Exception(f"Error parsing YAML file {yaml_file}: {e}")
    except KeyError as e:
        raise Exception(f"Missing expected key in the YAML data {yaml_file}: {e}")

def find_prev_commit(commit, filenames, verbose):
    for past_commit in commit.iter_parents():
        for f in past_commit.stats.files:
            if os.path.basename(f) in filenames:
                if verbose:
                    print(f"Found previous commit with id {commit}")
                return past_commit
    print("Could not find a previous commit that made changes to the same files...")
    return None

def clone_and_process_files(repo_url, commit_id, base_path, before_path, after_path, verbose):
    repo_path = os.path.join(base_path, 'repo')
    filenames = []
    try:
        if not os.path.exists(repo_path):
            if verbose:
                print(f"Cloning repository from {repo_url} to {repo_path}...")
            repo = Repo.clone_from(repo_url, repo_path)
        else:
            if verbose:
                print(f"Using existing cloned repository at {repo_path}...")
            repo = Repo(repo_path)
        
        commit = repo.commit(commit_id)
        os.makedirs(before_path, exist_ok=True)
        os.makedirs(after_path, exist_ok=True)
        
        repo.git.checkout(commit_id)
        if verbose:
            print(f"Checked out commit {commit_id} in {repo_path}. Copying changed files to 'after' directory...")
        for file in commit.stats.files:
            file_path = os.path.join(repo.working_dir, file)
            filenames.append(os.path.basename(file))
            if os.path.exists(file_path):
                shutil.copy(file_path, os.path.join(after_path, os.path.basename(file)))
        
        
        if commit.parents:
            prev_commit = find_prev_commit(commit, filenames, verbose)
            repo.git.checkout(prev_commit)
            if verbose:
                print(f"Checked out parent commit of {commit_id}. Copying changed files to 'before' directory...")
            for file in prev_commit.stats.files:
                if os.path.basename(file) not in filenames: continue
                file_path = os.path.join(repo.working_dir, file)
                if os.path.exists(file_path):
                    shutil.copy(file_path, os.path.join(before_path, os.path.basename(file)))
                    
    except (GitCommandError, InvalidGitRepositoryError) as e:
        raise Exception(f"Git operation failed: {e}")
    finally:
        repo.git.checkout('HEAD')
        shutil.rmtree(repo_path)
        if verbose:
            print(f"Cleaned up repository at {repo_path}.")

def scrape_commits(base_dir, verbose):
    for subdir in os.listdir(base_dir):
        subdir_path = os.path.join(base_dir, subdir)
        if os.path.isdir(subdir_path):
            yaml_file = next((f for f in os.listdir(subdir_path) if f.endswith('.yaml')), None)
            if yaml_file and not any(f for f in os.listdir(subdir_path) if f.endswith('.tar.gz') or f in ['before', 'after']):
                if verbose:
                    print(f"Processing YAML file {yaml_file} in {subdir_path}...")
                try:
                    commits = extract_commits(os.path.join(subdir_path, yaml_file))
                    for repo_url, commit_id in commits:
                        before_path = os.path.join(subdir_path, commit_id, 'before')
                        after_path = os.path.join(subdir_path, commit_id, 'after')
                        clone_and_process_files(repo_url, commit_id, subdir_path, before_path, after_path, verbose)
                except Exception as e:
                    print(f"Error processing {yaml_file}: {e}")
            else:
                if verbose:
                    print(f"Skipping directory {subdir_path} as it lacks YAML or has existing 'before'/'after' folders or has existing tarball")
        else:
            if verbose:
                print(f"Skipping {subdir} as it is not a directory.")
        print("\n\n")

def main():
    args = parse_options()
    scrape_commits(args.input, args.verbose)

if __name__ == '__main__':
    main()
