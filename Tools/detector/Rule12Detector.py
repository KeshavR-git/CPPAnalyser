# AskfirstorLast - the pattern consists of a loop that has a conditional statement checking the loop’s index
import json

def Rule12Detector(filename, temp_dict, path):
    with open("temp/" + path + "forLoopNodes.json") as f:
        jsonData = json.load(f)

    # Writing jsonData to a file in a beautified format, used for debugging purposes
    # should be removed later
    with open("output2.txt", "w") as outfile:
        json.dump(jsonData, outfile, indent=4)

    for ele in jsonData:
        if ele.get("kind") == "ForStmt":
            loop_var = findLoopVariable(ele)
            boundary_var, adjustment = findBoundaryVariable(ele, loop_var)
            for inner_ele in ele.get("inner", []):
                if inner_ele.get("kind") == "CompoundStmt":
                    for compound_inner in inner_ele.get("inner", []):
                        if compound_inner.get("kind") == "IfStmt":
                            if checkIfCondition(compound_inner, loop_var, boundary_var, adjustment):
                                printer(ele, filename, temp_dict)

def findLoopVariable(forStmt):
    for element in forStmt.get("inner", []):
        if element.get("kind") == "DeclStmt":
            for inner in element.get("inner", []):
                if inner.get("kind") == "VarDecl":
                    return inner.get("name")
    return None

def findBoundaryVariable(forStmt, loop_var):
    for element in forStmt.get("inner", []):
        if element.get("kind") == "BinaryOperator":
            # Check the right operand of the loop's condition
            right_operand = element.get("inner", [])[1]
            if right_operand.get("kind") == "ImplicitCastExpr":
                inner_expr = right_operand.get("inner", [])[0]
                if inner_expr.get("kind") == "DeclRefExpr":
                    referencedDecl = inner_expr.get("referencedDecl", {})
                    if referencedDecl.get("name") != loop_var:
                        return (referencedDecl.get("name"), None)
    return (None, None)

def checkIfCondition(ifStmt, loop_var, boundary_var, adjustment):
    for element in ifStmt.get("inner", []):
        if element.get("kind") == "BinaryOperator" and element.get("opcode") == "==":
            left_operand = element.get("inner", [])[0]
            right_operand = element.get("inner", [])[1]
            if left_operand.get("kind") == "ImplicitCastExpr":
                left_inner = left_operand.get("inner", [])[0]
                if left_inner.get("kind") == "DeclRefExpr" and left_inner.get("referencedDecl", {}).get("name") == loop_var:
                    if right_operand.get("kind") == "BinaryOperator" and right_operand.get("opcode") == "-":
                        right_left = right_operand.get("inner", [])[0]
                        right_right = right_operand.get("inner", [])[1]
                        if right_left.get("kind") == "ImplicitCastExpr":
                            right_left_inner = right_left.get("inner", [])[0]
                            if right_left_inner.get("kind") == "DeclRefExpr" and right_left_inner.get("referencedDecl", {}).get("name") == boundary_var:
                                if right_right.get("kind") == "IntegerLiteral" and int(right_right.get("value")) == 1:
                                    return True
    return False

def printer(json, filename, temp_dict):
    temp_dict[12] += 1
    line = json["range"]["begin"]["line"]
    col = json["range"]["begin"]["col"]
    print(f"{filename}:{line}:{col}: Rule12 Violated: Avoid conditional statements checking the loop’s index inside a For Loop.")

