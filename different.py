lines = []
i = 0
try:
    while True:
        line = input().split(" ")
        if line:
            lines.append(line)
            print(abs(int(lines[i][0]) - int(lines[i][1])))
            i += 1
        else:
            break
    num = '\n'.join(lines)
except EOFError:
    pass
