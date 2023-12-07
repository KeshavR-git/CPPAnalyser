# Rule10Detector.py
import json

def Rule10Detector(filename, temp_dict, path):
    f = open("temp/"+path+"forLoopNodes.json")
    jsonData = json.load(f)

    # Writing jsonData to a file in a beautified format, used for debugging purposes
    # should be removed later
    with open("output.txt", "w") as outfile:
        json.dump(jsonData, outfile, indent=4)

    for ele in jsonData:
        if ele.get("kind") == "ForStmt":
            for inner_ele in ele.get("inner", []):
                if inner_ele.get("kind") == "CompoundStmt":
                    for compound_inner in inner_ele.get("inner", []):
                        if compound_inner.get("kind") == "DeclStmt":
                            for decl_inner in compound_inner.get("inner", []):
                                if decl_inner.get("kind") == "VarDecl":
                                    for var_decl_inner in decl_inner.get("inner", []):
                                        if var_decl_inner.get("kind") == "CXXNewExpr":
                                            printer(ele, filename, temp_dict)


def printer(json, filename, temp_dict):
    temp_dict[10] += 1
    print("{filename}:{row}:{col}: Rule10 Violated: Avoid Repeated Resource Instantiation inside a For Loop.".format(filename = filename, row = json["range"]["begin"]["line"] - 1, col = json["range"]["begin"]["col"]))
