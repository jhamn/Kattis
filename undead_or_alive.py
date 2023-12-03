t = input()
if ":)" in t and ":(" not in t:
    print("alive")

if ":(" in t and ":)" not in t:
    print("undead")

if ":)" in t and ":(" in t:
    print("double agent")

if ":)" not in t and ":(" not in t:
    print("machine")