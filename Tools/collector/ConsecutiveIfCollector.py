import json

nodes = []

def ConsecutiveIfCollectorHelper(sourceFile, targetFile):
    f = open(sourceFile)
    jsonData = json.load(f)
    nodes.clear()

    ConsecutiveIfCollector(jsonData)

    with open("{target}".format(target = targetFile), "w") as jsonFile:
        jsonString = json.dumps(nodes)
        jsonFile.write(jsonString)

def ConsecutiveIfCollector(json):
    for i in range(len(json)):
        if i < len(json) - 1 and "kind" in json[i] and json[i]["kind"] == "IfStmt" and "hasElse" not in json[i] \
            and "kind" in json[i + 1] and json[i + 1]["kind"] == "IfStmt" and "hasElse" not in json[i + 1]:
            nodes.append([json[i], json[i + 1]])
        if "inner" in json[i] and "kind" in json[i] and json[i]["kind"] != "IfStmt":
            ConsecutiveIfCollector(json[i]["inner"])
        elif "inner" in json[i] and "kind" in json[i] and json[i]["kind"] == "IfStmt":
            ConsecutiveIfCollector([json[i]["inner"][1]])
