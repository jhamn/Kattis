import sys

inputstd = sys.stdin.read()

line = inputstd.split("\n")
line = line[:-1]

if int(line[0]) > 0 and int(line[1]) > 0:
    print("1")
elif int(line[0]) < 0 and int(line[1]) > 0:
    print("2")
elif int(line[0]) > 0 and int(line[1]) < 0:
    print("4")
elif int(line[0]) < 0 and int(line[1]) < 0:
    print("3")
