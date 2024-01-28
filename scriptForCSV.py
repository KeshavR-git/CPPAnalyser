import os
import subprocess
import csv
from collections import defaultdict

# path to read from the files s001-s141
base_path = "/Users/kr/desktop/Research Project Summer 2023/CPPAnalyser/Testing/week1-19"

# script path
script_path = "./ASTProcessor.py"

# student folders
students = []
for i in range(1, 142):
    student = "s" + str(i).zfill(3)
    students.append(student)


# dictionary to hold violations
violations = defaultdict(lambda: defaultdict(str))

# set to hold all hpp file names
all_hpp_files = set()

# Loop over each student
for student in students:
    # Get a list of all .hpp files in the student's folder
    folder_path = os.path.join(base_path, student)
    
    # Check if the directory exists
    if os.path.isdir(folder_path):
        hpp_files = []
        for f in os.listdir(folder_path):
            if f.endswith('.hpp'):
                hpp_files.append(f)
        all_hpp_files.update(hpp_files)

        # Loop over each hpp file
        for hpp_file in hpp_files:
            file_path = os.path.join(folder_path, hpp_file)

            # Run the script and capture the output
            result = subprocess.run(["python3", script_path, file_path], capture_output=True, text=True)

            # Store the output in the dictionary
            violations[student][hpp_file] = result.stdout

# Prepare the CSV writer
with open("violations.csv", "w", newline="") as csvfile:
    writer = csv.writer(csvfile)

    # Write the header row
    writer.writerow(["Student"] + list(all_hpp_files))

    # Write the violations for each student
    for student in students:
        row = [student]
        for hpp_file in all_hpp_files:
            row.append(violations[student][hpp_file])
        writer.writerow(row)
