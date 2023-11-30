# collect all for loop nodes
import os
import os.path

# Load json data
import json

nodes = []
idSet = set()

def ForLoopCollectorHelper(nodeType, attribute, sourceFile, targetFile):
    f = open(sourceFile)
    jsonData = json.load(f)
    nodes.clear()
    idSet.clear()
    for ele in jsonData:
        if "inner" in ele:
            ForLoopCollector(ele["inner"], nodeType, attribute, 0)

    if os.path.isfile(targetFile):
        os.system("rm {target}".format(target = targetFile))

    with open("{target}".format(target = targetFile), "w") as jsonFile:
        jsonString = json.dumps(nodes)
        jsonFile.write(jsonString)

def ForLoopCollector(json, nodeType, attribute, lineNum):
    for ele in json:
        if len(ele) == 0:
            continue
        if "kind" in ele:
            if ele[attribute] == nodeType and ele["id"] not in idSet:
                if ele["range"]["begin"].get("line") != None:
                    lineNum = ele["range"]["begin"]["line"]
                ele["range"]["begin"].update({"line":lineNum})
                nodes.append(ele)
                idSet.add(ele["id"])
        if "inner" in ele.keys():
            ForLoopCollector(ele["inner"], nodeType, attribute, lineNum)
