x = input().lower()
vowels = ['a','e','i','o','u']
res = 0
for letter in x:
    if letter in vowels:
        res += 1

print(res)