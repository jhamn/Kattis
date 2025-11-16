dirs = "N NE E SE S SW W NW".split()

a = dirs.index(input().strip())
b = dirs.index(input().strip())

cw  = (b - a) % 8 * 45
ccw = (a - b) % 8 * 45

if cw == 0:
  print("Keep going straight")
elif cw == 180:
  print("U-turn")
elif cw < ccw:
  print(f"Turn {cw} degrees starboard")
else:
  print(f"Turn {ccw} degrees port")
