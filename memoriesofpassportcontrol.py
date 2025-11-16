k, s = map(int, input().split())
res = 0
while s:
  s -= k if k <= s else 1
  res += 1
print(res)
