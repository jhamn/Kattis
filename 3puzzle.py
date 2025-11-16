from collections import deque

def solve():
  row1 = input().strip()
  row2 = input().strip()
  start = row1 + row2

  goal = "123-"

  if start == goal:
    print(0)
    return

  moves = {
    0: [1, 2],
    1: [0, 3],
    2: [0, 3],
    3: [1, 2],
  }

  queue = deque([(start, 0)])
  visited = {start}

  while queue:
    state, dist = queue.popleft()
    empty_pos = state.index("-")

    for next in moves[empty_pos]:
      new_state = list(state)
      new_state[empty_pos], new_state[next] = new_state[next], new_state[empty_pos]
      new_state = "".join(new_state)

      if new_state == goal:
          print(dist + 1)
          return

      if new_state not in visited:
        visited.add(new_state)
        queue.append((new_state, dist + 1))


solve()
