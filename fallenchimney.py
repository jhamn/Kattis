N = int(input())
res = max((int(x) for x,y in (input().split() for _ in range(N)) if y=="nej"), default=0)
print(res)
