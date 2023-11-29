# Cpp file preprocessing
import os

def HeaderPreprocessor(path):
    # Absolute path of a file
    old_name = path
    new_name = old_name
    new_name = new_name.replace(new_name[len(new_name) - 3 : ], "txt")

    # Renaming the file
    os.rename(old_name, new_name)
    contents = []
    with open(new_name, "r") as configFile:
        contents = configFile.readlines()   

    mark_found = False

    # Collect all header file and namespace declaration
    headers = []
    for i in reversed(range(len(contents))):
        statement = contents[i]
        if "#include" in statement or "# include" in statement or "using namespace" in statement:
            # move includes and using namespaces to start
            contents.pop(i)
            headers.append(statement)
        if "int XX_MARKER_XX;" in statement:
            mark_found = True
            
    headers.reverse()
    
    # Append XX_MARKER_XX into file
    if not mark_found:
        headers.append("int XX_MARKER_XX;\n")

    # Append all headers and namespace declaration at the start of the file
    with open(new_name, "w") as configFile:
        headers = "".join(headers)
        configFile.write(headers)         
        contents = "".join(contents)
        configFile.write(contents)         
                
    os.rename(new_name, old_name) 
    configFile.close()

def postHeaderPreprocessor(path):
    # Absolute path of a file
    old_name = path
    new_name = old_name
    new_name = new_name.replace(new_name[len(new_name) - 3 : ], "txt")

    # Renaming the file
    os.rename(old_name, new_name)
    contents = []
    with open(new_name, "r") as configFile:
        contents = configFile.readlines()   

    # Remove int XX_MARKER_XX;
    for i in reversed(range(len(contents))):
        statement = contents[i]
        if "int XX_MARKER_XX;" in statement:
            contents.pop(i)
            break
                
    # Remake file
    with open(new_name, "w") as configFile:
        contents = "".join(contents)
        configFile.write(contents)         
                
    os.rename(new_name, old_name) 
    configFile.close()

    os.system("rm temp/" + path +"*")