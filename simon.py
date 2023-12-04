n = int(input())
for i in range(n):
    s = input()
    if s.startswith("simon says"):
        print(' '.join(s.split()[2:]))
    else:
        print("\n")