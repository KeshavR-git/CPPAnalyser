from Tools.collector import ConsecutiveReturnCollector

# Load json data
import json

def Rule2Detector(filename, temp_dict, path):
    ConsecutiveReturnCollector.ConsecutiveReturnCollectorHelper(
        "temp/"+path+"functionNodes.json", 
        "temp/"+path+"consecutiveReturnNodes.json"
    )

    f = open("temp/"+path+"consecutiveReturnNodes.json")
    jsonData = json.load(f)

    for ele in jsonData:
        ifStmt = ele[0]
        lastChildOfIfStmt = ifStmt["inner"][len(ifStmt["inner"]) - 1]

        if lastChildOfIfStmt["kind"] == "ReturnStmt":
            printer(ele[0], filename, temp_dict)
        elif lastChildOfIfStmt["kind"] == "CompoundStmt" and len(lastChildOfIfStmt["inner"]) == 1 and lastChildOfIfStmt["inner"][0]["kind"] == "ReturnStmt":
            printer(ele[0], filename, temp_dict)


def printer(json, filename, temp_dict):
    temp_dict[2] += 1
    print("{filename}:{row}:{col}: Rule2 Violated: Explicitly returning true and flase after checking boolean with condition.".format(filename = filename, row = json["range"]["begin"]["line"] - 1, col = json["range"]["begin"]["col"]))
            
