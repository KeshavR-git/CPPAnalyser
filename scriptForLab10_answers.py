import os
import subprocess
import csv

# Directory containing the snippet files
base_dir = 'cpp_files'

# Create a CSV file to store results
csv_filename = 'cpp_violations.csv'
with open(csv_filename, 'w', newline='') as csvfile:
    writer = csv.writer(csvfile)
    writer.writerow(['Filename', 'Violations'])  # Write header row

    # Iterate through each file in the directory
    for filename in os.listdir(base_dir):
        if filename.endswith('.cpp'):
            file_path = os.path.join(base_dir, filename)

            # Run ASTProcessor.py on the file
            result = subprocess.run(['python3', 'ASTProcessor.py', file_path], capture_output=True, text=True)

            # Write filename and violations to the CSV
            writer.writerow([filename, result.stdout.strip()])  # Remove leading/trailing whitespace

print(f"Violations saved to {csv_filename}")

