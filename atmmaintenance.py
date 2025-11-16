n, k = map(int, input().split())

withdrawals = list(map(int, input().split()))

res = []

for amount in withdrawals:
  if k >= amount:
    res.append('1')
    k -= amount
  else:
    res.append('0')

print(''.join(res))
