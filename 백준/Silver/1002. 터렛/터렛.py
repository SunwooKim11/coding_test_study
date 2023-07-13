import math

n=int(input())
values=[]
for _ in range(n):
    values.append(list(map(int,input().split())))
for a in values:
    D=math.sqrt((a[0]-a[3])**2+(a[1]-a[4])**2)
    #print(type(a[2]), type(a[5]))
    if a[2]>a[5]:
        r=a[5]
        R=a[2]
    else:
        r=a[2]
        R=a[5]
    if D==0 and r==R:
        print(-1)
        continue
    if D>=R:
        if D>R+r:
            print(0)
        elif D==R+r:
            print(1)
        else:
            print(2)
    else:
        if D+r<R:
            print(0)
        elif D+r==R:
            print(1)
        else:
            print(2)