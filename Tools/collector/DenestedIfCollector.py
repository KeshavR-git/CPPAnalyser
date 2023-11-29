# Collect all top level 'if' nodes ('else if' are inner children of top level 'if')
import os
import os.path

# Load json data
import json

nodes = []
idSet = set()

def DenestedIfCollectorHelper(sourceFile, targetFile):
    f = open(sourceFile)
    jsonData = json.load(f)
    nodes.clear()
    idSet.clear()
    for ele in jsonData:
        if 'inner' in ele:
            DenestedIfCollector(ele["inner"], 0, False)

    addLine(nodes, 0)

    # Store function nodes into a new json file
    # Delete temp files
    if os.path.isfile(targetFile):
        os.system("rm {target}".format(target = targetFile))

    with open("{target}".format(target = targetFile), "w") as jsonFile:
        jsonString = json.dumps(nodes)
        jsonFile.write(jsonString)

def addLine(nodes, lineNum):
    for ele in nodes:
        if len(ele) == 0: 
            continue
        if 'range' in ele:
            if ele["range"]["begin"].get("line") == None:
                ele["range"]["begin"].update({"line":lineNum})
            if ele["range"]["end"].get("line") != None:
                lineNum = ele["range"]["end"]["line"]
        if "inner" in ele.keys():
            addLine(ele["inner"], lineNum)

def DenestedIfCollector(json, lineNum, skip):
    for ele in json:
        if len(ele) == 0: 
            continue
        if 'kind' in ele:
            if not skip and ele["kind"] == "IfStmt" and ele["id"] not in idSet:
                if ele["range"]["begin"].get("line") != None:
                    lineNum = ele["range"]["begin"]["line"]
                ele["range"]["begin"].update({"line":lineNum})
                nodes.append(ele)
                idSet.add(ele["id"])

        if "inner" in ele.keys():
            if ele["kind"] != "IfStmt":
                DenestedIfCollector(ele["inner"], lineNum, False)
            else:
                for node in ele["inner"]:
                    if node["kind"] == "CompoundStmt":
                        DenestedIfCollector([node], lineNum, False)
                    if node["kind"] == "IfStmt":
                        DenestedIfCollector([node], lineNum, True)
