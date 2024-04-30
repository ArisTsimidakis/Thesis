import os

path = "kaybee/statements"

def is_yaml_file(subdir, filename):
    path = os.path.join(subdir, filename)
    return os.path.basename(path).endswith('.yaml')

def is_tarball(subdir, filename):
    path = os.path.join(subdir, filename)
    return os.path.basename(path).endswith('.tar.gz')

def inspect_kaybee():
    total_folders = 0
    populated_folders = 0
    empty_folders = []
    
    for subdir in os.listdir(path):
        subdir_path = os.path.join(path, subdir)
        if os.path.isdir(subdir_path) and not os.path.basename(subdir_path) == 'output':
            total_folders += 1
            contains_source = False
            for filename in os.listdir(subdir_path):
                if not is_yaml_file(subdir_path, filename) and not is_tarball(subdir_path, filename):
                    if os.path.isdir(os.path.join(subdir_path, filename)):
                        contains_source = True
                        break
            if contains_source:
                populated_folders += 1
            else:
                empty_folders.append(subdir)
                
    
    print(f"Total folders that contain source code: {populated_folders} / {total_folders}")
    print(f"{total_folders - populated_folders} / {total_folders} folders do not contain source code:")
    print(empty_folders)


if __name__ == '__main__':
    inspect_kaybee()