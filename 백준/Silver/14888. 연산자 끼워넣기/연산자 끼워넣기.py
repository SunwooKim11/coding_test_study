import sys
from itertools import permutations as P

ops= []
N = int(sys.stdin.readline())
A = list(map(int, sys.stdin.readline().split()))
x_n, y_n, z_n, w_n = map(int, sys.stdin.readline().split())

ops += ['+'] * x_n
ops += ['-'] * y_n
ops += ['*'] * z_n
ops += ['/'] * w_n

maxV = -int(1e9)
minV = int(1e9)

for p in P(ops, N-1):
    # print(p)
    rst = A[0]
    for i in range(1, N):
        if p[i-1] == '+':
            rst += A[i]
        elif p[i-1] == '-':
            rst -= A[i]
        elif p[i-1] == '*':
            rst *= A[i]
        elif p[i-1] == '/':
            rst = int(rst/ A[i])
    if rst<minV:
        minV = rst
    if rst>maxV:
        maxV = rst
print(maxV)
print(minV)