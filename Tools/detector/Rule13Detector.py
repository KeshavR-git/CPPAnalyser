# nested for loops comparing indices of the loops
import json

def Rule13Detector(filename, temp_dict, path):
    with open("temp/" + path + "forLoopNodes.json") as f:
        jsonData = json.load(f)
        
    for ele in jsonData:
        if ele.get("kind") == "ForStmt":
            outer_loop_var = findLoopVariable(ele)
            for inner_ele in ele.get("inner", []):
                if inner_ele.get("kind") == "CompoundStmt":
                    for compound_inner in inner_ele.get("inner", []):
                        if compound_inner.get("kind") == "ForStmt":
                            inner_loop_var = findLoopVariable(compound_inner)
                            for nested_inner_ele in compound_inner.get("inner", []):
                                if nested_inner_ele.get("kind") == "CompoundStmt":
                                    for nested_compound_inner in nested_inner_ele.get("inner", []):
                                        if nested_compound_inner.get("kind") == "IfStmt":
                                            if checkIfCondition(nested_compound_inner, outer_loop_var, inner_loop_var):
                                                printer(ele, filename, temp_dict)
                            
def findLoopVariable(forStmt):
    for element in forStmt.get("inner", []):
        if element.get("kind") == "DeclStmt":
            for inner in element.get("inner", []):
                if inner.get("kind") == "VarDecl":
                    return inner.get("name")
    return None                                

def checkIfCondition(ifStmt, outer_loop_var, inner_loop_var):
    for element in ifStmt.get("inner", []):
        if element.get("kind") == "BinaryOperator":
            left_operand = element.get("inner", [])[0]
            right_operand = element.get("inner", [])[1]
            if left_operand.get("kind") == "ImplicitCastExpr":
                left_inner = left_operand.get("inner", [])[0]
                if left_inner.get("kind") == "DeclRefExpr" and left_inner.get("referencedDecl", {}).get("name") == outer_loop_var:
                    if right_operand.get("kind") == "ImplicitCastExpr":
                        right_inner = right_operand.get("inner", [])[0]
                        if right_inner.get("kind") == "DeclRefExpr" and right_inner.get("referencedDecl", {}).get("name") == inner_loop_var:
                            return True
    return False
                            
def printer(json, file_name, temp_dict):    
    temp_dict[13] += 1
    print("{filename}:{row}:{col}: Rule13 Violated: Nested For Loop With Indices Comparison.".format(filename = file_name, row = json["range"]["begin"]["line"] - 1, col = json["range"]["begin"]["col"]))
    