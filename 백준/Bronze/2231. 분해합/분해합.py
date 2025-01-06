def calcul(k):
    S=0
    while k:
        S+=k%10
        k=k//10
    return S

n=input()
digits=len(n)-1
n=int(n)
try:
    roopT=9*digits+n//(10*digits)
    rst=0
    for i in range(roopT):
        m=n-i
        sub=calcul(m)
        if sub==i:
            rst=m
    else:
        print(rst)
except ZeroDivisionError:
    print(n//2)

