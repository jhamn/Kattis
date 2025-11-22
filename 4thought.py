from itertools import product

ops = '+-*/'
mp = {}

for op1,op2,op3 in product(ops, repeat=3):
    expr = f"4{op1}4{op2}4{op3}4"
    try:
        val = eval(expr.replace('/', '//'))
        if val == int(val) and val not in mp:
            mp[val] = f"4 {op1} 4 {op2} 4 {op3} 4 = {int(val)}"
    except ZeroDivisionError:
        continue

for _ in range(int(input())):
    n = int(input())
    print(mp.get(n,"no solution"))
