import pandas as pd
import os

# Load the Excel file
excel_path = 'Lab10-answers21.xlsx'
df = pd.read_excel(excel_path)

df.head()

# Extracting the 'value' column which contains the code snippets
code_snippets = df['value'].dropna().tolist()

# output directory for the CPP files
output_dir_cpp = 'cpp_files'
os.makedirs(output_dir_cpp, exist_ok=True)

# Write each code snippet to a separate CPP file
cpp_files = []
for i, code in enumerate(code_snippets):
    # Clean the code text to remove unwanted characters
    clean_code = code.replace('_x000D_\n', '\n').strip()
    
    # the filename
    filename = f"snippet_{i+1}.cpp"
    file_path = os.path.join(output_dir_cpp, filename)
    
    # Write the code to the file
    with open(file_path, 'w') as file:
        file.write(clean_code)
        
    # Saving the file path
    cpp_files.append(file_path)

cpp_files
