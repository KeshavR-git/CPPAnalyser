import json

def Rule12Variation2Detector(filename, temp_dict, path):
    with open("temp/" + path + "forLoopNodes.json") as f:
        jsonData = json.load(f)

    for ele in jsonData:
        if ele.get("kind") == "ForStmt":
            loop_var, init_value = findLoopVariableAndInit(ele)
            if init_value is not None:
                for inner_ele in ele.get("inner", []):
                    if inner_ele.get("kind") == "CompoundStmt":
                        for compound_inner in inner_ele.get("inner", []):
                            if compound_inner.get("kind") == "IfStmt" and checkIfFirstIteration(compound_inner, loop_var, init_value):
                                printer(ele, filename, temp_dict)

def findLoopVariableAndInit(forStmt):
    for element in forStmt.get("inner", []):
        if element.get("kind") == "DeclStmt":
            for inner in element.get("inner", []):
                if inner.get("kind") == "VarDecl" and inner.get("init", "") == "c":
                    loop_var = inner.get("name")
                    init_value = findInitValue(inner)
                    return loop_var, init_value
    return None, None

def findInitValue(varDecl):
    for inner in varDecl.get("inner", []):
        if inner.get("kind") == "IntegerLiteral":
            return inner.get("value")
    return None

def checkIfFirstIteration(ifStmt, loop_var, init_value):
    condition = ifStmt.get("inner", [])[0]
    if condition.get("kind") == "BinaryOperator" and condition.get("opcode") == "==":
        left_operand = condition.get("inner", [])[0]
        right_operand = condition.get("inner", [])[1]
        if left_operand.get("kind") == "ImplicitCastExpr":
            left_inner = left_operand.get("inner", [])[0]
            if left_inner.get("kind") == "DeclRefExpr" and left_inner.get("referencedDecl", {}).get("name") == loop_var:
                if right_operand.get("kind") == "IntegerLiteral" and right_operand.get("value") == init_value:
                    return True
    return False

def printer(json, filename, temp_dict):
    temp_dict[12] += 1
    line = json["range"]["begin"]["line"]
    col = json["range"]["begin"]["col"]
    print(f"{filename}:{line}:{col}: Rule12 Violated: Consider refactoring the loop to remove the initial 'if' condition.")
