import os
import os.path
import json

# Initialize an empty list and set
nodes = []
idSet = set()

# This function processes the JSON data and writes the results to a file
def ForLoopCollectorHelper(nodeType, attribute, sourceFile, targetFile):
    # Open the source file and load the JSON data
    f = open(sourceFile)
    jsonData = json.load(f)
    
    # Clear the nodes list and idSet
    nodes.clear()
    idSet.clear()
    
    # Process each element in the JSON data
    for ele in jsonData:
        if "inner" in ele:
            ForLoopCollector(ele["inner"], nodeType, attribute, 0)
    
    # If the target file already exists, delete it
    if os.path.isfile(targetFile):
        os.system("rm {target}".format(target = targetFile))
    
    # Write the nodes to the target file in JSON format
    with open("{target}".format(target = targetFile), "w") as jsonFile:
        jsonString = json.dumps(nodes)
        jsonFile.write(jsonString)

# This function recursively processes the JSON data and extracts certain nodes
def ForLoopCollector(json, nodeType, attribute, lineNum):
    # Process each element in the JSON data
    for ele in json:
        # Skip empty elements
        if len(ele) == 0:
            continue
        
        # If the element has the specified attribute and its value matches the nodeType
        if "kind" in ele:
            if ele[attribute] == nodeType and ele["id"] not in idSet:
                # Update the line number if it's not None
                if ele["range"]["begin"].get("line") != None:
                    lineNum = ele["range"]["begin"]["line"]
                
                # Update the line number in the element
                ele["range"]["begin"].update({"line":lineNum})
                
                # Add the element to the nodes list and its id to the idSet
                nodes.append(ele)
                idSet.add(ele["id"])
        
        # If the element has an "inner" attribute, process it recursively
        if "inner" in ele.keys():
            ForLoopCollector(ele["inner"], nodeType, attribute, lineNum)
