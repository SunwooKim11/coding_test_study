arr = [list(map(int,input().split())) for _ in range(9)]
# print(arr) # debug

maxV = 0 
resI, resJ = 0, 0
for i in range(9):
    for j in range(9):
        if arr[i][j] > maxV:
            maxV = arr[i][j]
            resI = i
            resJ = j
print(maxV)
print(resI+1, resJ+1)