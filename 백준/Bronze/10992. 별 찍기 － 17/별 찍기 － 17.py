n=int(input())

for i in range(1, n):
    print(' '*(n-i), end='')
    print('*', end ='')
    print(' '*(2*i-3), end='')
    if(i != 1):
        print('*')
    else:
        print()    
print('*'*(2*n-1))