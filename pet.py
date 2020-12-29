import sys

inputstd = sys.stdin.read()

line = inputstd.split("\n")
line = line[:-1]

i = 0
sum_tot = 0

while i < len(line):
    total = 0
    score1, score2, score3, score4 = map(int, line[i].split())
    total = score1 + score2 + score3 + score4
    if total > sum_tot:
        sum_tot = total
        person = i + 1
    i += 1

print(person, sum_tot)
