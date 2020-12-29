num = input()
inpt = [None] * int(num)
tot_sec = 0
tot_min = 0
for i in range(0, int(num)):
    inpt[i] = input().split(" ")
    tot_sec = tot_sec + int(inpt[i][1])
    tot_min = tot_min + int(inpt[i][0])

tot = tot_sec / (tot_min * 60)

if tot <= 1:
    print("measurement error")
else:
    print(tot)
