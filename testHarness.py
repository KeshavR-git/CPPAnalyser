import os
import subprocess

parent_dir = "/Users/kr/Desktop/Research Project Summer 2023/CPPAnalyser/Testing/week1-19"
ast_processor_path = "/Users/kr/Desktop/Research Project Summer 2023/CPPAnalyser/ASTProcessor.py"

# Iterate over subdirectories in parent directory
for subdir in os.listdir(parent_dir):
    # Full path to subdirectory
    subdir_path = os.path.join(parent_dir, subdir)

    # Check if it's a directory
    if os.path.isdir(subdir_path):
        # Iterate over .hpp files in subdirectory
        for filename in os.listdir(subdir_path):
            # Check if file is a .hpp file
            if filename.endswith(".hpp"):
                # Full path to .hpp file
                file_path = os.path.join(subdir_path, filename)

                # Run Python program on file and capture output
                result = subprocess.run(["python3", ast_processor_path, file_path], capture_output=True, text=True)

                # Full path to .txt file
                txt_path = os.path.join(subdir_path, os.path.splitext(filename)[0] + ".txt")

                # Write output to .txt file
                with open(txt_path, "w") as f:
                    f.write(result.stdout)
