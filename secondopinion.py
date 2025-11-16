x = int(input())
m, s = divmod(x, 60)
h, m = divmod(m, 60)

print(f'{h:d} : {m:d} : {s:d} ')
