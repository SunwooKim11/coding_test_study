T=int(input())
n=int(input())
rst=0
for i in range(T):
    rst+=n%10
    n=n//10
print(rst)