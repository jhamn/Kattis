N = int(input())

def xor0toN(n):
  r = [n,1,n+1,0]
  return r[n%4]

T = xor0toN(N)
x = 0

for i in reversed(range(N.bit_length()+1)):
  bit = 1 << i
  t_bit = T & bit
  n_bit = N & bit
  if not t_bit:
    if x | bit <= N:
      x |= bit

y = T ^ x

print("YES" if y > N else "NO")
