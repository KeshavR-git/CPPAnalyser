# Documentation for Rule 9 Detector

# 1) Any nodes that are right after 'return' and 'break' an 'continue' 
#     - A node -> check if the node contains 'return' and 'break' and 'continue' and make sure they are the last child
#     - Collect all compound statement nodes -> if 'return' and 'break' an 'continue' are the last child
# 2) Functions that are never called
#     - Collect all CallExpr nodes
#     - Collect all of the function name
#     - Compare these function names with all functions in our program


# Load json data
import json
from Tools.collector import InnerNodesCollector

functionUsed = set()

def Rule9Detector(filename, temp_dict, path):
    InnerNodesCollector.InnerNodesCollectorHelper(
        "CompoundStmt", 
        "kind", 
        "temp/"+path+"functionNodes.json", 
        "temp/"+path+"compoundStatementNodes.json"
    )

    f = open("temp/"+path+"compoundStatementNodes.json")
    jsonData = json.load(f)

    # 1) Any nodes that are right after 'return' and 'break' an 'continue' 
    for ele in jsonData:
        if ele.get("inner") == None:
            continue
        for i in range(len(ele["inner"]) - 1):
            if ele["inner"][i]["kind"] == "ReturnStmt" or ele["inner"][i]["kind"] == "BreakStmt" or ele["inner"][i]["kind"] == "ContinueStmt":
                printerForKeywords(ele["inner"][i], filename, temp_dict)


    # 2) Functions that are never called
    InnerNodesCollector.InnerNodesCollectorHelper(
        "CallExpr", 
        "kind", 
        "temp/"+path+"functionNodes.json", 
        "temp/"+path+"callExprNodes.json"
    )

    f = open("temp/"+path+"callExprNodes.json")
    jsonData = json.load(f)

    # Collect names of all functions that are called
    for ele in jsonData:
        if 'inner' in ele and 'inner' in ele['inner'][0] and 'referencedDecl' in ele['inner'][0]['inner'][0]:
            functionUsed.add(ele["inner"][0]["inner"][0]["referencedDecl"]["name"])

    # Check all functions that are defined to see if they have been used
    f = open("temp/"+path+"functionNodes.json")
    jsonData = json.load(f)

    for ele in jsonData:
        functionName = ele["name"]
        if functionName == "main" or functionName in functionUsed:
            continue
        else:
            printerForFunctions(ele, filename, temp_dict)


def printerForKeywords(json, filename, temp_dict):
    temp_dict[9] += 1
    print("{filename}:{row}:{col}: Rule9 Violated: Code that is never executed.".format(filename = filename, row = json["range"]["begin"]["line"], col = json["range"]["begin"]["col"]))


def printerForFunctions(json, filename, temp_dict):
    temp_dict[9] += 1
    if "line" in json["loc"]:
        print("{filename}:{row}:{col}: Rule9 Violated: Code that is never executed.".format(filename = filename, row = json["loc"]["line"] - 1, col = json["loc"]["col"], funName = json["name"]))