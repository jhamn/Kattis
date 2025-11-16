N, Q = map(int, input().split())
d, base = {}, 0

for _ in range(Q):
  cmd, *args = input().split()
  if cmd == "SET":
    d[int(args[0])] = int(args[1])
  elif cmd == "RESTART":
    base = int(args[0])
    d.clear()
  elif cmd == "PRINT":
    print(d.get(int(args[0]), base))
