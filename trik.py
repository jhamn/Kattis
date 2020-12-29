temp = input()
ball = 1
for letter in temp:
    if letter is "A" and ball == 1:
        ball = 2
    elif letter is "A" and ball == 2:
        ball = 1
    if letter is "B" and ball == 2:
        ball = 3
    elif letter is "B" and ball == 3:
        ball = 2
    if letter is "C" and ball == 1:
        ball = 3
    elif letter is "C" and ball == 3:
        ball = 1
print(ball)
