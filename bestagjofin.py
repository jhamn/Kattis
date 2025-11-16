n = int(input())
print(max((input().split() for _ in range(n)), key=lambda x: int(x[1]))[0])
