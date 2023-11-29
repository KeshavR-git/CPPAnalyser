import os
from sys import argv
import sys
import builtins
from Tools.util import HeaderPreprocessor
from Tools.collector import SubRoutineCollector
from Tools.detector import Rule1Detector
from Tools.detector import Rule2Detector
from Tools.detector import Rule3Detector
from Tools.detector import Rule4Detector
from Tools.detector import Rule5Detector
from Tools.detector import Rule6Detector
from Tools.detector import Rule7Detector
from Tools.detector import Rule8Detector
from Tools.detector import Rule9Detector

total_files = 0
freqViolation = {
        1:0,
        2:0,
        3:0,
        4:0,
        5:0,
        6:0,
        7:0,
        8:0,
        9:0
}
amtViolation = {
        1:0,
        2:0,
        3:0,
        4:0,
        5:0,
        6:0,
        7:0,
        8:0,
        9:0
}
sum_of_squares = {
        1:0,
        2:0,
        3:0,
        4:0,
        5:0,
        6:0,
        7:0,
        8:0,
        9:0
}

def runFile(name):
    if not os.path.isfile(name):
        print("File " + name + " does not exist.")
        return

    if not (name.endswith(".cpp") or name.endswith(".c") or name.endswith(".hpp")):
        print("File " + name + " is not a valid file.")
        return
    
    runTool(name)

def runFolder(name):
    if os.path.exists(name):
        if os.path.isdir(name):
            files = os.listdir(name)
            for file in files:
                if os.path.isfile(os.path.join(name, file)):
                    runFile(os.path.join(name, file))
                elif os.path.isdir(os.path.join(name, file)):
                    runFolder(os.path.join(name, file))
        elif os.path.isfile(name):
            runFile(name)
            runFile(name)

def runTool(name):
    temp_dict = {
        1:0,
        2:0,
        3:0,
        4:0,
        5:0,
        6:0,
        7:0,
        8:0,
        9:0
    }
    # Preprocess Stage
    HeaderPreprocessor.HeaderPreprocessor(name)
    SubRoutineCollector.FunctionCollector(name)

    # Rule Detecting Stage

    # # change print for csv
    # old_print = builtins.print

    # def custom_print(*args, **kwargs):
    #     kwargs['end'] = ','
    #     old_print(*args, **kwargs)

    # builtins.print = custom_print
    # print(name)
    Rule1Detector.Rule1Detector(name, temp_dict, name)
    Rule2Detector.Rule2Detector(name, temp_dict, name)
    Rule3Detector.Rule3Detector(name, temp_dict, name)
    Rule4Detector.Rule4Detector(name, temp_dict, name)
    Rule5Detector.Rule5Detector(name, temp_dict, name)
    Rule6Detector.Rule6Detector(name, temp_dict, name)
    Rule7Detector.Rule7Detector(name, temp_dict, name)
    Rule8Detector.Rule8Detector(name, temp_dict, name)
    Rule9Detector.Rule9Detector(name, temp_dict, name)

    # builtins.print = old_print

    # print('')

    global total_files
    total_files += 1
    for key, value in temp_dict.items():
        if value != 0:
            global freqViolation
            freqViolation[key] += 1
            global amtViolation
            amtViolation[key] += value
            global sum_of_squares
            sum_of_squares[key] += value ** 2

    # Postprocess Stage
    HeaderPreprocessor.postHeaderPreprocessor(name)

#get input and check its valid
if len(argv) == 1:
    print("Please enter a file name/s.")
    quit()

#check all given input dirs and call file or folder checks as necessary
for name in argv[1 : len(argv)]:
    if os.path.exists(name):
        if os.path.isdir(name):
            runFolder(name)
        elif os.path.isfile(name):
            runFile(name)
