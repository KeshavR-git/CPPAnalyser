import sympy
from sympy import S, oo
import json
from Tools.collector import ConsecutiveIfCollector
from Tools.util.IfFunctions import *

def Rule6Detector(filename, temp_dict, path):
    ConsecutiveIfCollector.ConsecutiveIfCollectorHelper(
        "temp/"+path+"functionNodes.json", 
        "temp/"+path+"consecutiveIifNodes.json"
    )

    f = open("temp/"+path+"consecutiveIifNodes.json")
    jsonData = json.load(f)

    for pair in jsonData:
        try:
            pair0 = classify_body(pair[0])
            pair1 = classify_body(pair[1])

            if pair0.entirely_ineq and pair1.entirely_ineq:
                cond_str_1 = listToString(Condition(pair[0]).cond)
                ineq1 = sympy.sympify(cond_str_1, evaluate=False)

                cond_str_2 = listToString(Condition(pair[1]).cond)
                ineq2 = sympy.sympify(cond_str_2, evaluate=False)

                # == and !=
                if (ineq1.rel_op == "==" and ineq2.rel_op == "!=") or (ineq1.rel_op == "!=" and ineq2.rel_op == "=="):
                    if (ineq1.lhs == ineq2.lhs and ineq1.rhs == ineq2.rhs) or (ineq1.lhs == ineq2.rhs and ineq1.rhs == ineq2.lhs):
                        printer(pair[1], filename, temp_dict)
                        continue

                # > and <= \ # >= and < \ # < and >= \ # <= and >
                if (ineq1.rel_op == ">" and ineq2.rel_op == "<=") or \
                    (ineq1.rel_op == ">=" and ineq2.rel_op == "<") or \
                    (ineq1.rel_op == "<" and ineq2.rel_op == ">=") or \
                    (ineq1.rel_op == "<=" and ineq2.rel_op == ">"):
                    if ineq1.lhs == ineq2.lhs and ineq1.rhs == ineq2.rhs:
                        printer(pair[1], filename, temp_dict)
                        continue

            if pair0.entirely_mod and pair0.entirely_ineq and pair1.entirely_mod and pair1.entirely_ineq:
                mods = set()
                ops = set()
                eqs = set()
                reqs = set()

                curr_str = listToString(Condition(pair[0]).cond)
                curr_expr = sympy.sympify(curr_str, evaluate=False)

                ops.add(curr_expr.rel_op)

                if isinstance(curr_expr.lhs, sympy.Mod):
                    mods.add(curr_expr.lhs)
                    eqs.add(curr_expr.rhs)
                else:
                    mods.add(curr_expr.rhs)
                    eqs.add(curr_expr.lhs)

                curr_str = listToString(Condition(pair[1]).cond)
                curr_expr = sympy.sympify(curr_str, evaluate=False)

                ops.add(curr_expr.rel_op)

                if isinstance(curr_expr.lhs, sympy.Mod):
                    mods.add(curr_expr.lhs)
                    eqs.add(curr_expr.rhs)
                else:
                    mods.add(curr_expr.rhs)
                    eqs.add(curr_expr.lhs)

                # different mod conditions
                if len(mods) != 1 or len(ops) != 1:
                    continue
                
                # modulus is not an integer
                if not next(iter(mods)).args[1].is_integer:
                    continue

                for i in range(next(iter(mods)).args[1]):
                    reqs.add(i)
                if eqs == reqs:
                    printer(pair[1], filename, temp_dict)

            # final check
            cond1_str = listToString(Condition(pair[0]).cond)
            cond2_str = listToString(Condition(pair[1]).cond)
            
            check_1 = "~(" + cond1_str + ")"
            check_2 = "~(" + cond2_str + ")"

            if cond2_str == check_1 or cond1_str == check_2:
                printer(pair[1], filename, temp_dict)

            if len(Condition(pair[0]).cond) == 1 or len(Condition(pair[1]).cond) == 1:
                check_3 = "~" + cond1_str
                check_4 = "~" + cond2_str

                if cond2_str == check_3 or cond1_str == check_4:
                    printer(pair[1], filename, temp_dict)
        except:
            continue
        
        
def printer(json, filename, temp_dict):
    temp_dict[6] += 1
    print("{filename}:{row}:{col}: Rule6 Violated: Series of IF statements with opposite conditions instead of using ELSE.".format(filename = filename, row = json["range"]["begin"]["line"] - 1, col = json["range"]["begin"]["col"]))