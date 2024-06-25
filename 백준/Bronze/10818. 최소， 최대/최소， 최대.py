n=int(input())
values=input().split()
for i in range(n):
    values[i]=int(values[i])
print(min(values),max(values))
