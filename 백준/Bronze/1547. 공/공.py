M = int(input())
arr = [list(map(int, input().split())) for _ in range(M)]
cups = [1, 2, 3]


for pair in arr:
    x_idx = cups.index(pair[0])
    y_idx = cups.index(pair[1])

    # swap
    tmp = cups[x_idx]
    cups[x_idx] = cups[y_idx]
    cups[y_idx] = tmp

print(cups[0])