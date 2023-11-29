# Collect all 'function' nodes
import os
import json

from pathlib import Path

def FunctionCollector(path):
    # Run command to get json file of AST output
    # copy = "copy-sub.cpp"
    # command = "cp {path} {copy}".format(path = path, copy = copy)
    # os.system(command)
    os.makedirs(os.path.dirname("temp/"+path+"output.json"), exist_ok=True)
    # command = "clang -w -Xclang -ast-dump=json -fsyntax-only -fno-color-diagnostics {copy} > temp/output.json".format(copy = copy)
    command = "clang -w -Xclang -ast-dump=json -fsyntax-only -fno-color-diagnostics {path} > temp/{path}output.json".format(path = path)

    os.system(command)

    # Load json data
    f = open("temp/"+path+"output.json")
    jsonData = json.load(f)

    # # Get function nodes
    index = len(jsonData["inner"]) - 1
    functionNodes = []
    while True:
        node = jsonData["inner"][index]
        if "name" not in node:
            index -= 1
        elif node["name"] != "XX_MARKER_XX":
            functionNodes.append(node)
            index -= 1
        else:
            break

    # Store function nodes into a new json file
    os.makedirs(os.path.dirname("temp/"+path+"functionNodes.json"), exist_ok=True)
    with open("temp/"+path+"functionNodes.json", "w") as jsonFile:
        jsonString = json.dumps(functionNodes)
        jsonFile.write(jsonString)

    # Delete temp files
    os.system("rm temp/"+path+"output.json")
    # os.system("rm " + copy)