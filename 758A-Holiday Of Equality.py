n = int(input())
a = list(map(int, input().split()))

max_val = max(a)  # richest citizen's welfare
total = 0

for x in a:
    total += max_val - x  # money needed for this citizen

print(total)
