inpt = input()

foo = inpt.split(" ")

for i in range(1, int(foo[2])+1):
    if i % int(foo[0]) == 0 and i % int(foo[1]) != 0:
        print("Fizz")
    elif i % int(foo[0]) != 0 and i % int(foo[1]) == 0:
        print("Buzz")
    elif i % int(foo[0]) == 0 and i % int(foo[1]) == 0:
        print("FizzBuzz")
    else:
        print(i)
