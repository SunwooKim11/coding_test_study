N = int(input())
time = list(map(int, input().split()))
# print(time) # debug

Y, M = 0, 0

for t in time:
    Y += (t//30+1) * 10
    M += (t//60+1) * 15
    # print(Y, M) # debug
ans = []
if Y>M:
    ans = ['M', M]
elif Y<M:
    ans = ['Y', Y]
else:
    ans = ['Y', 'M', Y]
print(*ans)

