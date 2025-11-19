_ = input()
k = sum(map(int, input().split()))
l = sum(map(int, input().split()))
print("Button 1" if k > l else "Button 2" if k < l else "Oh no")
