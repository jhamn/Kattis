n = input()
temps = input()
temp = temps.split(" ")
amt = 0
for i in range(0, int(n)):
    if int(temp[i]) < 0:
        amt += 1
print(amt)
