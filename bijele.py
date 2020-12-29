list = [0]
new_list = [0, 0, 0, 0, 0, 0]

for i in range(0, 1):
    list[i] = input().split(" ")

new_list[0] = 1 - int(list[0][0])
new_list[1] = 1 - int(list[0][1])
new_list[2] = 2 - int(list[0][2])
new_list[3] = 2 - int(list[0][3])
new_list[4] = 2 - int(list[0][4])
new_list[5] = 8 - int(list[0][5])

for i in range(0, 6):
    print(new_list[i], end=' ')
