from Tools.collector import InnerNodesCollector
from Tools.collector import BooleanOperatorCollector

# Load json data
import json

def Rule1Detector(filename, temp_dict, path):
    InnerNodesCollector.InnerNodesCollectorHelper(
        "IfStmt", 
        "kind", 
        "temp/"+path+"functionNodes.json", 
        "temp/"+path+"ifNodes.json"
    )
    BooleanOperatorCollector.BooleanOperatorCollectorHelper(
        "BinaryOperator", 
        "kind", 
        "temp/"+path+"ifNodes.json", 
        "temp/"+path+"booleanOperatorNodes.json"
    )
    
    f = open("temp/"+path+"booleanOperatorNodes.json")
    jsonData = json.load(f)
    
    for ele in jsonData:
        if (ele["opcode"] == "=="):
            if getLValueType(ele["inner"]):
                printer(ele, filename, temp_dict)


def getLValueType(json):
    for ele in json:
        if ele["valueCategory"] == "lvalue" and ele["type"]["qualType"] == "bool":
                return True
        if "inner" in ele.keys():
            if ele.get("inner") != None:
                return getLValueType(ele["inner"]) 
    return False


def printer(json, filename, temp_dict):
    temp_dict[1] += 1
    print("{filename}:{row}:{col}: Rule1 Violated: No need to check if Boolean variable is equal to true or false.".format(filename = filename, row = json["range"]["begin"]["line"] - 1, col = json["range"]["begin"]["col"]))