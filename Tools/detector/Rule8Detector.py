# Documentation for Rule 8 Detector

# We will collect all if statements
# 1) Check if the compound statement of 'if' statements is empty
# 2) Collect all binary operator nodes, check if there is any self-assignment

# Load json data
import json
from Tools.collector import InnerNodesCollector

def Rule8Detector(filename, temp_dict, path):
    # Check if the compound statement of 'if' statements is empty
    # Process If Nodes
    f = open("temp/"+path+"ifNodes.json")
    processStmt(f, filename, temp_dict);

    # Process While Nodes
    InnerNodesCollector.InnerNodesCollectorHelper(
        "WhileStmt", 
        "kind", 
        "temp/"+path+"functionNodes.json", 
        "temp/"+path+"whileStatementNodes.json"
    )
    f = open("temp/"+path+"whileStatementNodes.json")
    processStmt(f, filename, temp_dict);

    # Process For Nodes
    InnerNodesCollector.InnerNodesCollectorHelper(
        "ForStmt", 
        "kind", 
        "temp/"+path+"functionNodes.json", 
        "temp/"+path+"forStatementNodes.json"
    )
    f = open("temp/"+path+"forStatementNodes.json")
    processStmt(f, filename, temp_dict)

    # Check if there is any self-assignment
    InnerNodesCollector.InnerNodesCollectorHelper(
        "BinaryOperator", 
        "kind", 
        "temp/"+path+"functionNodes.json", 
        "temp/"+path+"binaryOperatorNodes.json"
    )
    f = open("temp/"+path+"binaryOperatorNodes.json")
    processBinaryOperator(f, filename, temp_dict)


# Check if the statement is empty or not
def processStmt(f, filename, temp_dict):
    jsonData = json.load(f)

    # Check the compound statements
    for ele in jsonData:
        # Store the line number of if statement in case it only has one empty compound statement
        lineNum = ele["range"]["begin"]["line"]
        # Count the number of compound statements
        numOfCompoundStmt = 0
        for childEle in ele["inner"]:
            if childEle.get("kind") == None:
                continue
            if childEle["kind"] == "CompoundStmt":
                numOfCompoundStmt += 1
        # Check if compound statement is empty
        for childEle in ele["inner"]:
            if childEle.get("kind") == None:
                continue
            if childEle["kind"] == "CompoundStmt":
                if childEle.get("inner") == None:
                    if numOfCompoundStmt == 1:
                        printerForEmptyStatementsA(childEle, filename, lineNum, temp_dict)
                    else:
                        printerForEmptyStatementsB(childEle, filename, temp_dict)


def processBinaryOperator(f, filename, temp_dict):
    jsonData = json.load(f)
    # Check each binary operator node
    for ele in jsonData:
        # Check if the binary operator is '='

        if ele["opcode"] == "=":
            if "referencedDecl" in ele: # added this check -jun
                leftName = ele["inner"][0]["referencedDecl"]["name"]
                # Check if is a self-assignment structure
                if ele["inner"][1]["kind"] == "ImplicitCastExpr":
                    if "referencedDecl" in ele: #added this check -jun
                        rightName = ele["inner"][1]["inner"][0]["referencedDecl"]["name"]
                        # Detect self-assignment
                        if leftName == rightName:
                            printSelfAssignment(ele, filename, rightName)



def printerForEmptyStatementsA(json, filename, lineNum, temp_dict):
    temp_dict[8] += 1
    print("{filename}:{row}:{col}: Rule8 Violated: The block associated with the IF (or ELSE) has no statements (or self-assignment).".format(filename = filename, row = lineNum - 1, col = json["range"]["begin"]["col"]))


def printerForEmptyStatementsB(json, filename, temp_dict):
    temp_dict[8] += 1
    print("{filename}:{row}:{col}: Rule8 Violated: The block associated with the IF (or ELSE) has no statements (or self-assignment).".format(filename = filename, row = json["range"]["end"]["line"] - 1, col = json["range"]["begin"]["col"]))

def printSelfAssignment(json, filename, variableName, temp_dict):
    temp_dict[8] += 1
    print("{filename}:{row}:{col}: Rule8 Violated: The block associated with the IF (or ELSE) has no statements (or self-assignment).".format(filename = filename, row = json["range"]["begin"]["line"] - 1, col = json["range"]["begin"]["col"], var = variableName)) 