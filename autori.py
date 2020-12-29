name = input()
new_name = ""
for letter in name:
    if letter.isupper():
        new_name = new_name + letter
print(new_name)
