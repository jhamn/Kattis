M = input()

H = M.split()

if int(H[1]) >= 45:
    H[1] = int(H[1]) - 45
    for i in range(0,2):
        print(H[i], end=' ')
elif int(H[1]) < 45:
    H[1] = 60 - (45 - int(H[1]))
    if int(H[0]) == 0:
        H[0] = 23
    else:
        H[0] = int(H[0]) - 1
    for i in range(0, 2):
        print(H[i], end=' ')
