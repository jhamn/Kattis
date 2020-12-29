try:
    lines = []
    while True:
        line = input().split(" ")
        if line:
           lines.append(line)
        else:
            break
except EOFError:
    pass
text = lines[1]
lines = list(map(int, lines[0]))
lines.sort()

if text[0] == "ABC":
    print(lines[0], lines[1], lines[2])
elif text[0] == "ACB":
    print(lines[0], lines[2], lines[1])
elif text[0] == "CAB":
    print(lines[2], lines[0], lines[1])
elif text[0] == "CBA":
    print(lines[2], lines[1], lines[0])
elif text[0] == "BCA":
    print(lines[1], lines[2], lines[0])
else:
    print(lines[1], lines[0], lines[2])
