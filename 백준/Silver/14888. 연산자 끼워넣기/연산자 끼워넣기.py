import sys
from itertools import permutations as P

N = int(sys.stdin.readline())
A = list(map(int, sys.stdin.readline().split()))
plus, minus, product, divide = map(int, sys.stdin.readline().split())

maxV = -int(1e9)
minV = int(1e9)

def dfs(level, rst, plus, minus, product, divide):
    global maxV, minV
    if level == N:
        maxV = max(maxV, rst)
        minV = min(minV, rst)
        return
    if plus:
        dfs(level+1, rst+A[level], plus-1, minus, product, divide )
    if minus:
        dfs(level+1, rst-A[level], plus, minus-1, product, divide )
    if product:
        dfs(level+1, rst*A[level], plus, minus, product-1, divide )
    if divide:
        if rst <0 and A[level]>0:
            rst = (-1)*((-1)*rst // A[level])
        else:
            rst = rst// A[level]
        dfs(level+1, rst, plus, minus, product, divide-1)

dfs(1, A[0], plus, minus, product, divide)
print(maxV)
print(minV)