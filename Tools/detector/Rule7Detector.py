# Documentation for Rule 7 Detector

# Get all the if nodes and look at each one to determine
# if it is an if-else strictly look for duplication in body of statements
# otherwise skip it

# Load json data
import json
import copy
from Tools.collector import InnerNodesCollector

def Rule7Detector(filename, temp_dict, path):
    # Check if the compound statement of 'if' statements is empty
    # Process If Nodes
    f = open("temp/"+path+"ifNodes.json")
    processStmt(f, filename, temp_dict)

def check(dict1, dict2):
    if type(dict1) != type(dict2):
        return False
    
    if set(dict1.keys()) != set(dict2.keys()):
        return False

    for key in dict1:
        if type(dict1[key]) == dict:
            if not check(dict1, dict2):
                return False
        elif dict1[key] != dict2[key]:
            return False
    
    return True


# Check if the statement is empty or not
def processStmt(f, filename, temp_dict):
    jsonData = json.load(f)

    # Check the compound statements
    for ele in jsonData:
        # Check that we have strictly and if-else chain exactly
        if(len(ele["inner"]) != 3 or ele["inner"][2]["kind"] != "CompoundStmt"):
            continue

        #ignoring the empty if-else bodies and filtering down to only if-else with statements
        if (not "inner" in ele["inner"][1]) or (not "inner" in ele["inner"][2]):
            continue
        
        # Get the body of statements executed in the if and else cases
        ifBodyArray = ele["inner"][1]["inner"]
        elseBodyArray = ele["inner"][2]["inner"]

        #init a few needed variables
        idx = 0
        idxRange = min(len(ifBodyArray), len(elseBodyArray))

        #recursively delete unnecessary details like id and range since they dont matter for line comparison
        ifBodyArrayDupe = copy.deepcopy(ifBodyArray)
        deleteRecursiveRange(ifBodyArray)
        elseBodyArrayDupe = copy.deepcopy(elseBodyArray)
        deleteRecursiveRange(elseBodyArray)

        #noted issue: if both bodies perfectly identical will output an error message for each identical line

        # Check from top to bottom for duplicated statements
        while(idx < idxRange and ifBodyArray[idx] == elseBodyArray[idx]):
            printerForIdenticalStarts(ifBodyArrayDupe[idx], elseBodyArrayDupe[idx], filename, temp_dict)
            idx = idx + 1

        # Check from bottom to top for duplicated statements
        idx = idxRange - 1
        while(idx >= 0 and ifBodyArray[idx] == elseBodyArray[idx]):
            printerForIdenticalEnds(ifBodyArrayDupe[idx], elseBodyArrayDupe[idx], filename, temp_dict)
            idx = idx - 1

def deleteRecursiveRange(jsonList):
    #figure out if were passed a json or list of json then delete id and range from it recursively
    if isinstance(jsonList, list):
        for ele in jsonList:
            if "range" in ele:
                del ele["range"]
            if "id" in ele:
                del ele["id"]
            deleteRecursiveRange(ele)
    else:
        if "range" in jsonList:
            del jsonList["range"]
        if "id" in jsonList:
            del jsonList["id"]
        if "inner" in jsonList:
            deleteRecursiveRange(jsonList["inner"])
        if "referencedDecl" in jsonList:
            deleteRecursiveRange(jsonList["referencedDecl"])

def printerForIdenticalStarts(json, json2, filename, temp_dict):
    temp_dict[7] += 1
    print("{filename}:{row}:{col}: and {filename}:{row2}:{col2} Rule7 Violated: Repeated statement(s) in branches of conditional statement (could be taken out).".format
        (filename = filename, row = json["range"]["begin"]["line"] - 1, col = json["range"]["begin"]["col"],  row2 = json2["range"]["begin"]["line"] - 1, col2 = json2["range"]["begin"]["col"]))

def printerForIdenticalEnds(json, json2, filename, temp_dict):
    temp_dict[7] += 1
    print("{filename}:{row}:{col}: and {filename}:{row2}:{col2} Rule7 Violated: Repeated statement(s) in branches of conditional statement (could be taken out).".format
        (filename = filename, row = json["range"]["begin"]["line"] - 1, col = json["range"]["begin"]["col"],  row2 = json2["range"]["begin"]["line"] - 1, col2 = json2["range"]["begin"]["col"]))