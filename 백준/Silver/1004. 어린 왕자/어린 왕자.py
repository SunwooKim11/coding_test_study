import math
def locate(x, y, a, b, r):
    distance = math.sqrt((x-a)**2 + (y-b)**2)
    rst = True if distance<r else False
    return rst

n=int(input())
rst = []
for _ in range(n):
    x1, y1, x2, y2 = map(int, input().strip().split())
    plants = int(input())
    inout=0
    for i in range(plants):
        x, y, R = map(int, input().strip().split())
        if locate(x1, y1, x, y, R)^locate(x2, y2, x, y, R):
            inout+=1
    else:
        rst.append(inout)

for a in rst:
    print(a)