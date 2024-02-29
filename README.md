# CPPAnalyser
The C++ code refactoring tool is designed to analyse C++ files and identify code violations.

Summer Research Project (Nov 2023 - Feb 2024)

# Supervisor 
Dr Cruz Izu

# Students
* Keshav Rana
* Quan Nguyen

# Main Components of Tool
1. ASTProcessor.py
 * This program processes individual .cpp files.
 * It identifies violations in the code and prints relevant information.
 * Usage: python3 ASTProcessor.py <cpp_file>

2. scriptForCSV.py
 * An alternative way to test your cpp file/files.
 * Creates a dictionary called results to store output.
 * Iterates over subdirectories in a specified base directory.
 * Checks if each subdirectory is valid.
 * Usage: Supply your directory in the base_dir variable in the script enclosed with single quotation mark and run python3 scriptForCSV.py.
