import sys

inputstd = sys.stdin.read()

foo = inputstd.replace("\n"," ")
foo = foo.split(" ")
foo = foo[1:-1]


for n in foo:
    if int(n) % 2 == 0:
        print (str(n) + " is even")
    else:
        print (str(n) + " is odd")
