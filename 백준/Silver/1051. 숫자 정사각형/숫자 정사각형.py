def func(row, column, pan):
    minLength = row if row < column else column
    for l in range(minLength - 1, 0, -1):
        for r in range(row - l):
            for c in range(column - l):
                if pan[r][c] == pan[r + l][c] and pan[r][c] == pan[r][c + l] and pan[r][c] == pan[r + l][c + l]:
                    return (l+1)*(l+1)
    else:
        return 1

row, column = map(int, input().strip().split())
pan = [ input() for _ in range(row)]
print(func(row, column, pan))

