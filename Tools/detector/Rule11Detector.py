#implement variable declared in loop - when a temporary variable is declared inside the loop.
import json

def Rule11Detector(filename, temp_dict, path):
    f = open("temp/" + path + "forLoopNodes.json")
    jsonData = json.load(f)
    
    for ele in jsonData:
        if "inner" in ele:
            for inner_ele in ele["inner"]:
                if isinstance(inner_ele, dict) and "kind" in inner_ele and inner_ele["kind"] == "DeclStmt":
                    for inner_inner_ele in inner_ele["inner"]:
                        if isinstance(inner_inner_ele, dict) and "kind" in inner_inner_ele and inner_inner_ele["kind"] == "VarDecl" and "inner" in inner_inner_ele:
                            printer(ele, filename, temp_dict)
                            
def printer(json, filename, temp_dict):
    temp_dict[11] += 1
    print("{filename}:{row}:{col}: Rule11 Violated: Variable declared in loop.".format(filename = filename, row = json["range"]["begin"]["line"] - 1, col = json["range"]["begin"]["col"]))