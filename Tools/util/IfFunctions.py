# Functions for processing If nodes

import sympy

class If_Classified:
    def __init__(self, type: str, if_children: int, else_at_end: bool):
        self.type = type
        self.if_children = if_children
        self.else_at_end = else_at_end

    def __str__(self) -> str:
        return f"type: {self.type}, if_children: {self.if_children}, else_at_end: {self.else_at_end}"

    def is_if(self):
        return self.type == "IfStmt"
    
class If_Body:
    def __init__(self, entirely_ineq: bool, entirely_mod: bool, entirely_logic: bool, has_logic: bool, has_bool: bool, has_mod: bool, num_of_conds: bool, else_at_end: bool, symbols: set, type: set):
        self.entirely_ineq = entirely_ineq
        self.entirely_mod = entirely_mod
        self.entirely_logic = entirely_logic
        self.has_logic = has_logic
        self.has_bool = has_bool
        self.has_mod = has_mod
        self.num_of_conds = num_of_conds
        self.else_at_end = else_at_end
        self.symbols = symbols
        self.type = type
    
def get_condition(node, dest: list, type: set):
    if node and "type" in node:
        if "qualType" in node["type"]:
            if "int" in node["type"]["qualType"]:
                type.add("int")
            elif "float" in node["type"]["qualType"]:
                type.add("float")
            elif "double" in node["type"]["qualType"]:
                type.add("double")
    if node and "kind" in node and node["kind"] == "ArraySubscriptExpr":
        temp = []
        get_condition(node["inner"][0], temp, type)
        temp.append("[")
        get_condition(node["inner"][1], temp, type)
        temp.append("]")
        temp_str = listToString(temp)
        dest.append(temp_str)
        return
    if node and "kind" in node and node["kind"] == "CallExpr":
        temp = []
        temp.append(node["inner"][0]["inner"][0]["referencedDecl"]["name"])
        temp.append("(")
        for i in range(1, len(node["inner"])):
            get_condition(node["inner"][i], temp, type)
            if i != len(node["inner"]) - 1:
                temp.append(",")
        temp.append(")")
        temp_str = listToString(temp)
        dest.append(temp_str)
    if node and "kind" in node and node["kind"] != "CompoundStmt" and node["kind"] != "CallExpr":
        if "opcode" in node and node["opcode"] == "!":
            dest.append("~")
        if "kind" in node and node["kind"] == "ParenExpr":
            dest.append("(")
        if "inner" in node and "isPostfix" not in node:
            get_condition(node["inner"][0], dest, type)
        if "valueCategory" in node and node["valueCategory"] == "lvalue" or node["valueCategory"] == "plvalue":
            if "value" in node:
                dest.append(node["value"])
            elif "referencedDecl" in node:
                dest.append(node["referencedDecl"]["name"])
        if "opcode" in node and node["opcode"] != "!":
            if node["opcode"] == "&&":
                dest.append("&")
            elif node["opcode"] == "||":
                dest.append("|")
            else:
                dest.append(node["opcode"])
        if "inner" in node and "isPostfix" in node:
            get_condition(node["inner"][0], dest, type)
        if "inner" in node and len(node["inner"]) == 2:
            get_condition(node["inner"][1], dest, type)
        if "valueCategory" in node and node["valueCategory"] == "rvalue" or node["valueCategory"] == "prvalue":
            if "value" in node:
                dest.append(node["value"])
            elif "referencedDecl" in node:
                dest.append(node["referencedDecl"]["name"])
        if "kind" in node and node["kind"] == "ParenExpr":
            dest.append(")")
        
class Condition:
    def __init__(self, node):
        c = []
        type = set()
        if node["kind"] == "IfStmt":
            get_condition(node["inner"][0], c, type)
        self.cond = c
        self.type = type
        self.has_eq = "==" in self.cond
        self.has_ne = "!=" in self.cond
        self.has_ineq = "==" in self.cond or "!=" in self.cond or ">" in self.cond or "<" in self.cond or ">=" in self.cond or "<=" in self.cond
        self.has_op = "+" in self.cond or "-" in self.cond or "*" in self.cond or "/" in self.cond or "%" in self.cond or "++" in self.cond or "--" in self.cond    
        self.has_mod = "%" in self.cond
        self.has_and = "&" in self.cond
        self.has_or = "|" in self.cond
        self.has_bool = True in self.cond or False in self.cond
        self.has_logic = self.has_and or self.has_or
        self.purely_logic = not self.has_ineq and not self.has_op

def classify(node) -> If_Classified:
    if node and "kind" in node and node["kind"] == "IfStmt":
        if_children_count = 0
        else_at_end = False
        curr = node
        while "hasElse" in curr:
            if_children_count += 1
            if curr["inner"][2]["kind"] == "IfStmt":
                curr = curr["inner"][2]
            else:
                else_at_end = True
                break
        return If_Classified("IfStmt", if_children_count, else_at_end)

    return If_Classified("N/A", 0, False)

def get_if_child(node):
    if classify(node).if_children == 0 or (classify(node).if_children == 1 and classify(node).else_at_end):
        return {}
    return node["inner"][2]

def classify_body(node) -> If_Body:
    if not classify(node).is_if():
        return
    
    curr = node

    entirely_ineq = True
    entirely_mod = True
    entirely_logic = True
    has_logic = False
    has_bool = False
    has_mod = False
    # need to add case where condition has logic and ineq

    symbols = set()
    type = set()

    while curr != {}:
        currC = Condition(curr)

        c_str = listToString(currC.cond)
        type.update(currC.type)
           
        try:
            e = sympy.sympify(c_str, evaluate=False)
            symbols.update(e.free_symbols)
        except:
            pass
        
        entirely_ineq = entirely_ineq and currC.has_ineq and not currC.has_logic
        entirely_mod = entirely_mod and currC.has_mod and not currC.has_logic
        entirely_logic = entirely_logic and currC.purely_logic
        has_logic = has_logic or currC.has_logic
        has_bool = has_bool or currC.has_bool
        has_mod = has_mod or currC.has_mod
        # need to add case where condition has logic and ineq

        curr = get_if_child(curr)

    ret = classify(node)
    num_of_conds = ret.if_children
    if not ret.else_at_end:
        num_of_conds += 1
    
    return If_Body(entirely_ineq, entirely_mod, entirely_logic, has_logic, has_bool, has_mod, num_of_conds, ret.else_at_end, symbols, type)

def listToString(list: list) -> str:
    string = ""
    for char in list:
        string += str(char)
    return string
