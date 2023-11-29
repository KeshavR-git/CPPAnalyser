import sympy
from sympy import S, oo
import json
from Tools.collector import DenestedIfCollector
from Tools.util.IfFunctions import *

def Rule5Detector(filename, temp_dict, path):
    DenestedIfCollector.DenestedIfCollectorHelper(
        "temp/"+path+"functionNodes.json", 
        "temp/"+path+"denestedIifNodes.json"
    )

    f = open("temp/"+path+"denestedIifNodes.json")
    jsonData = json.load(f)
    
    for node in jsonData:
        try:
            currCB = classify_body(node)

            # skip node if it contains bool
            if currCB.has_bool:
                continue

            # basic check for two multivariate conditional if blocks
            if currCB.num_of_conds == 2 and currCB.entirely_ineq:
                curr_cond = node

                cond_str_1 = listToString(Condition(curr_cond).cond)
                ineq1 = sympy.sympify(cond_str_1, evaluate=False)

                curr_cond = get_if_child(curr_cond)

                cond_str_2 = listToString(Condition(curr_cond).cond)
                ineq2 = sympy.sympify(cond_str_2, evaluate=False)

                # == and !=
                if (ineq1.rel_op == "==" and ineq2.rel_op == "!=") or (ineq1.rel_op == "!=" and ineq2.rel_op == "=="):
                    if (ineq1.lhs == ineq2.lhs and ineq1.rhs == ineq2.rhs) or (ineq1.lhs == ineq2.rhs and ineq1.rhs == ineq2.lhs):
                        printer(curr_cond, filename, temp_dict)
                        continue

                # > and <= \ # >= and < \ # < and >= \ # <= and >
                if (ineq1.rel_op == ">" and ineq2.rel_op == "<=") or \
                    (ineq1.rel_op == ">=" and ineq2.rel_op == "<") or \
                    (ineq1.rel_op == "<" and ineq2.rel_op == ">=") or \
                    (ineq1.rel_op == "<=" and ineq2.rel_op == ">"):
                    if ineq1.lhs == ineq2.lhs and ineq1.rhs == ineq2.rhs:
                        printer(curr_cond, filename, temp_dict)
                        continue
            
            # basic check for three multivariate conditional if blocks
            if currCB.num_of_conds == 3 and currCB.entirely_ineq:
                curr_cond = node
                cond_str_1 = listToString(Condition(curr_cond).cond)
                ineq1 = sympy.sympify(cond_str_1, evaluate=False)

                curr_cond = get_if_child(curr_cond)

                cond_str_2 = listToString(Condition(curr_cond).cond)
                ineq2 = sympy.sympify(cond_str_2, evaluate=False)

                curr_cond = get_if_child(curr_cond)

                cond_str_3 = listToString(Condition(curr_cond).cond)
                ineq3 = sympy.sympify(cond_str_3, evaluate=False)

                # == and < and > \ == and > and < \ < and == and > \ > and == and < \ < and > and == \ > and < and ==
                # currently does not check different orders of lhs and rhs (which means sign changes)
                if (ineq1.rel_op == "==" and ineq2.rel_op == "<" and ineq3.rel_op == ">") or \
                    (ineq1.rel_op == "==" and ineq2.rel_op == ">" and ineq3.rel_op == "<") or \
                    (ineq1.rel_op == "<" and ineq2.rel_op == "==" and ineq3.rel_op == ">") or \
                    (ineq1.rel_op == ">" and ineq2.rel_op == "==" and ineq3.rel_op == "<") or \
                    (ineq1.rel_op == "<" and ineq2.rel_op == ">" and ineq3.rel_op == "==") or \
                    (ineq1.rel_op == ">" and ineq2.rel_op == "<" and ineq3.rel_op == "=="):
                    if ineq1.lhs == ineq2.lhs and ineq1.lhs == ineq3.lhs and ineq1.rhs == ineq2.rhs and ineq1.rhs == ineq3.rhs:
                        printer(curr_cond, filename, temp_dict)
                        continue

            # checks all univariate inequalities without mod
            if currCB.entirely_ineq and len(currCB.symbols) == 1 and not currCB.has_mod:
                a = -oo
                b = oo

                if len(currCB.type) == 1 and "int" in currCB.type:
                    all_ss = S.Integers
                else:
                    all_ss = S.Reals

                curr_cond = node

                curr_cond_str = listToString(Condition(curr_cond).cond)
                ineq = sympy.sympify(curr_cond_str, evaluate=False)


                if len(currCB.type) == 1 and "int" in currCB.type:
                    body_ss = sympy.solveset(ineq, domain=S.Integers)
                else:
                    body_ss = sympy.solveset(ineq, domain=S.Reals)


                if body_ss == all_ss:
                    printerAlwaysTrue(curr_cond, filename, temp_dict)
                    break
                
                if all_ss.is_subset(body_ss):
                    printerAlwaysTrue(curr_cond, filename, temp_dict)
                    break

                curr_cond = get_if_child(curr_cond)

                while curr_cond != {}:
                    curr_cond_str = listToString(Condition(curr_cond).cond)
                    ineq = sympy.sympify(curr_cond_str, evaluate=False)
                    
                    if len(currCB.type) == 1 and "int" in currCB.type:
                        body_ss = body_ss.union(sympy.solveset(ineq, domain=S.Integers))
                    else:
                        body_ss = body_ss.union(sympy.solveset(ineq, domain=S.Reals))
                    
                    body_ss = sympy.sympify(body_ss)

                    
                    if body_ss == all_ss:
                        printer(curr_cond, filename, temp_dict)
                        break

                    if body_ss.is_Union and len(currCB.type) == 1 and "int" in currCB.type:
                        first_before = -1
                        set_i = -1
                        first_after = -1
                        for i in range(0, len(body_ss.args)):
                            if isinstance(body_ss.args[i], sympy.FiniteSet):
                                set_i = i
                            if isinstance(body_ss.args[i], sympy.Range):
                                if body_ss.args[i].start == a:
                                    first_before = i
                            if isinstance(body_ss.args[i], sympy.Range):
                                if body_ss.args[i].stop == b:
                                    first_after = i
                                    break

                        if first_before != -1 and first_after != -1:
                            if set_i == -1:
                                if body_ss.args[first_before].start == a and body_ss.args[first_before].stop >= body_ss.args[first_after].start and body_ss.args[first_after].stop == b:
                                    printer(curr_cond, filename, temp_dict)
                                    break
                            else:
                                valid = True
                                if body_ss.args[first_before].stop < body_ss.args[first_after].start:
                                    for i in range(body_ss.args[first_before].stop, body_ss.args[first_after].start):
                                        if i not in body_ss.args[set_i]:
                                            valid = False
                                if valid and body_ss.args[first_before].start == a and body_ss.args[first_after].stop == b:
                                    printer(curr_cond, filename, temp_dict)
                                    break

                    curr_cond = get_if_child(curr_cond)
                

            # check all mod-based conditions  
            if currCB.num_of_conds > 1 and currCB.entirely_mod and currCB.entirely_ineq:
                mods = set()
                ops = set()
                eqs = set()
                reqs = set()
                
                last_node = node
                curr_node = node
                while curr_node != {}:
                    curr_str = listToString(Condition(curr_node).cond)
                    curr_expr = sympy.sympify(curr_str, evaluate=False)
                    ops.add(curr_expr.rel_op)

                    if isinstance(curr_expr.lhs, sympy.Mod):
                        mods.add(curr_expr.lhs)
                        eqs.add(curr_expr.rhs)
                    else:
                        mods.add(curr_expr.rhs)
                        eqs.add(curr_expr.lhs)
                    
                    last_node = curr_node
                    curr_node = get_if_child(curr_node)

                # different mod conditions
                if len(mods) != 1 or len(ops) != 1:
                    continue
                
                # modulus is not an integer
                if not next(iter(mods)).args[1].is_integer:
                    continue

                for i in range(next(iter(mods)).args[1]):
                    reqs.add(i)
                if eqs == reqs:
                    printer(last_node, filename, temp_dict)
        
            # if purely logic, create a truth table and see if all possibilities have been accounted for
            if currCB.entirely_logic:
                curr_cond = node
                curr_cond_str = "(" + listToString(Condition(curr_cond).cond) + ")"
                body_str = curr_cond_str

                logic_expr = sympy.sympify(curr_cond_str, evaluate=False)
                body_logic = logic_expr

                body_tt = sympy.logic.boolalg.truth_table(body_logic, list(body_logic.free_symbols))

                sols = sympy.logic.inference.satisfiable(body_logic, all_models=True)

                sols_set = list()
                tt_set = list()

                for sol in sols:
                    if sol:
                        sols_set.append(sol)

                for m in body_tt:
                    if m:
                        tt_set.append(m)

                if len(sols_set) == len(tt_set):
                    printerAlwaysTrue(curr_cond, filename, temp_dict)
                    break

                curr_cond = get_if_child(curr_cond)
                flag = True

                while curr_cond != {} and flag:
                    curr_cond_str = "(" + listToString(Condition(curr_cond).cond) + ")"
                    body_str = body_str + " | " + curr_cond_str

                    body_logic = sympy.sympify(body_str, evaluate=False)

                    body_tt = sympy.logic.boolalg.truth_table(body_logic, list(body_logic.free_symbols))

                    sols = sympy.logic.inference.satisfiable(body_logic, all_models=True)

                    sols_set = list()
                    tt_set = list()

                    for sol in sols:
                        if sol:
                            sols_set.append(sol)

                    for m in body_tt:
                        if m:
                            tt_set.append(m)

                    if len(sols_set) == len(tt_set):
                        printer(curr_cond, filename, temp_dict)
                        flag = False
                        break

                    curr_cond = get_if_child(curr_cond)

                if not flag:
                    continue

            # check if cond and !(cond)
            if currCB.num_of_conds == 2:
                cond1_str = listToString(Condition(node).cond)

                next_node = get_if_child(node)

                cond2_str = listToString(Condition(next_node).cond)
                
                check_1 = "~(" + cond1_str + ")"
                check_2 = "~(" + cond2_str + ")"

                if cond2_str == check_1 or cond1_str == check_2:
                    printer(next_node, filename, temp_dict)

                if len(Condition(node).cond) == 1 or len(Condition(next_node).cond) == 1:
                    check_3 = "~" + cond1_str
                    check_4 = "~" + cond2_str

                    if cond2_str == check_3 or cond1_str == check_4:
                        printer(next_node, filename, temp_dict)
        except:
            continue

def printer(json, filename, temp_dict):
    temp_dict[5] += 1
    # print(json)
    print("{filename}:{row}:{col}: Rule5 Violated: Checking an expression that has a known True/False value.".format(filename = filename, row = json["range"]["begin"]["line"] - 1, col = json["range"]["begin"]["col"]))

    # if function is called but else after current IF, else compound statement is dead code

def printerAlwaysTrue(json, filename, temp_dict):
    temp_dict[5] += 1
    print("{filename}:{row}:{col}: Rule5 Violated: Checking an expression that has a known True/False value.".format(filename = filename, row = json["range"]["begin"]["line"] - 1, col = json["range"]["begin"]["col"]))