banned_letters = input()
sentence = input().split()

found = False
res = ''
for word in sentence:
    for letter in word:
        if letter in banned_letters:
            found = True
            break

    if found:
        res += '*' * len(word) + ' '
        found = False
    else:
        res += word + ' '

print(res)