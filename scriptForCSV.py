import os
import subprocess
import csv

# The directory containing the student folders
base_dir = 'week1-19'

# Create a dictionary to store the results
results = {}

# Iterate over all subdirectories in the base directory
for student_dir in os.listdir(base_dir):
    # Construct the full path to the student directory
    student_dir_path = os.path.join(base_dir, student_dir)

    # Check if it's a directory
    if os.path.isdir(student_dir_path):
        # Iterate over all files in the student directory
        for filename in os.listdir(student_dir_path):
            # Check if the file is a .hpp file
            if filename.endswith('.hpp'):
                # Construct the full path to the file
                file_path = os.path.join(student_dir_path, filename)

                # Run ASTProcessor.py on the file
                result = subprocess.run(['python3', 'ASTProcessor.py', file_path], capture_output=True, text=True)

                # Store the output in the results dictionary
                if filename not in results:
                    results[filename] = {}
                results[filename][student_dir] = result.stdout

# Write the results to a CSV file
with open('results.csv', 'w', newline='') as csvfile:
    writer = csv.writer(csvfile)
    # Write the header row
    writer.writerow(['Student/File'] + list(results.keys()))
    # Write the data rows
    for student_dir in os.listdir(base_dir):
        writer.writerow([student_dir] + [results.get(filename, {}).get(student_dir, '') for filename in results.keys()])
