n, k = map(int, input().split())
a = list(map(int, input().split()))
print(*[1 if abs(x-1)<=abs(x-n) else n for x in a])
