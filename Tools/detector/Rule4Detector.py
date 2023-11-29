
import json


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

def consecutive(jsonList,indices,depth=0,index=-1):  #my original version
    prev_index = index
    curr_index = index
    prev = {"kind":"default"}

    if isinstance(jsonList, list):
        for ele in jsonList:
            curr = ele
            if 'kind' in curr:
                if(curr['kind'] == 'IfStmt'):
                    curr_index = curr_index + 1
            if 'kind' in curr and 'kind' in prev:
                if(curr['kind'] == 'IfStmt' and prev['kind'] == 'IfStmt'):
                    indices.append(prev_index)
                    indices.append(curr_index)

            prev = ele
            prev_index = curr_index

            curr_index = consecutive(ele,indices,depth+1,curr_index)
    else:
        if "inner" in jsonList:
            curr_index = consecutive(jsonList["inner"],indices,depth+1,curr_index)
    
    return curr_index



def compare_arrays(json,array, temp_dict):
    match = []
    length = len(array)
    for i in range (0,length,2):

        if i == 0: #this exists because if accessing same json, del deletes again causing errors
            del(json[array[i]]['inner'][0])
        elif array[i] != array[i-1]:
            del(json[array[i]]['inner'][0])

        del(json[array[i+1]]['inner'][0])

        if json[array[i]]['inner'] == json[array[i+1]]['inner']:
            temp_dict[4] += 1
            match.append(array[i])
            match.append(array[i+1])
    return match



def get_line(json):
    return json.get('line')

def printerForConsecutiveIfStmt(json_data, filename, match):
    #temp_dict[4] += 1   <-- this was moved to compare arrays because print is called differently in r4
    for ele in match:
        json_item = json_data[ele]
        #The print statement uses ["range"]["begin"]["line"] because i wanted to flag the condition line of the ifstmt hence i use "begin" instead
        print("{filename}:{line}:{col}: Rule4 Violated: Avoid a series of consecutive IF statements that when true they result in the same action by using or (||) operator.".format( 
            filename=filename, line=json_item["range"]["begin"]["line"], col = json_item["range"]["begin"]["col"]))


def Rule4Detector(filename, temp_dict, path): 
    ifnodes = open("temp/"+path+"ifNodes.json")
    sanitisedifNodes = json.load(ifnodes)
    ifnodes.seek(0)
    unsanitisedifNodes = json.load(ifnodes)

    functionNodes = open("temp/"+path+"functionNodes.json")
    functionnodes = json.load(functionNodes)

    array = []

    consecutive(functionnodes,array)
    deleteRecursiveRange(sanitisedifNodes)

    match = compare_arrays(sanitisedifNodes,array, temp_dict)
    printerForConsecutiveIfStmt(unsanitisedifNodes,filename,match)