# Rule10Detector.py
import json

def Rule10Detector(filename, temp_dict, path):
    f = open("temp/"+path+"forLoopNodes.json")
    jsonData = json.load(f)

    # with open('output_file.txt', 'w') as output_file:
    #     for ele in jsonData:
    #         if "inner" in ele:
    #             for inner_ele in ele["inner"]:
    #                 print(inner_ele, file=output_file)  # Print to the file
    #                 print("\n", file=output_file)

    # with open('output_file2.txt', 'w') as output_file2:
    #     for ele in jsonData:
    #         if "inner" in ele:
    #             for inner_ele in ele["inner"]:
    #                 if isinstance(inner_ele, dict) and "kind" in inner_ele and inner_ele["kind"] == "DeclStmt":
    #                     print(inner_ele["inner"], file=output_file2)
    #                     print("\n", file=output_file2)

    flag1 = False
    flag2 = False

    for ele in jsonData:
        if "inner" in ele:
            for inner_ele in ele["inner"]:
                print(inner_ele)
                print("\n")
                if isinstance(inner_ele, dict) and "kind" in inner_ele and inner_ele["kind"] == "DeclStmt":
                    for inner_inner_ele in inner_ele["inner"]:
                        if isinstance(inner_inner_ele, dict) and "kind" in inner_inner_ele and inner_inner_ele["kind"] == "VarDecl" and "inner" in inner_inner_ele:
                            flag1 = True
                if isinstance(inner_ele, dict) and "kind" in inner_ele and inner_ele["kind"] == "CXXNewExpr":
                    print("\n\n\n\n\n")
                    print("Found CXXNewExpr")
                    flag2 = True
                
                if flag1 and flag2:
                    printer(ele, filename, temp_dict)
                    flag1 = False
                    flag2 = False
                                

    # for ele in jsonData:
    #     if "inner" in ele:
    #         for inner_ele in ele["inner"]:
    #             print(inner_ele)
    #             print("\n")
    #             if isinstance(inner_ele, dict) and "kind" in inner_ele and inner_ele["kind"] == "DeclStmt":
    #                 for inner_inner_ele in inner_ele["inner"]:
    #                     if isinstance(inner_inner_ele, dict) and "kind" in inner_inner_ele and inner_inner_ele["kind"] == "VarDecl" and "inner" in inner_inner_ele:
    #                         flag1 = True
    #                         for inner_inner_inner_ele in inner_inner_ele["inner"]:
    #                             if isinstance(inner_inner_inner_ele, dict) and "kind" in inner_inner_inner_ele and inner_inner_inner_ele["kind"] == "CXXNewExpr":
    #                                 printer(ele, filename, temp_dict)

def printer(json, filename, temp_dict):
    temp_dict[10] += 1
    print("{filename}:{row}:{col}: Rule10 Violated: Avoid repeated resource instantiation inside a loop.".format(filename = filename, row = json["range"]["begin"]["line"] - 1, col = json["range"]["begin"]["col"]))
