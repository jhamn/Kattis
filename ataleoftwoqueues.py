input()
lt, rt = sum(map(int, input().split())), sum(map(int, input().split()))
print(("either", "right", "left")[(lt > rt) - (lt < rt)])
