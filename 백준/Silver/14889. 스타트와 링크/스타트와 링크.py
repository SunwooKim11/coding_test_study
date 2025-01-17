from itertools import combinations as C
import sys
N = int(input())
arr = [ list(map(int, sys.stdin.readline().split())) for _ in range(N)]


def get_power(c: tuple):
    global arr
    power = 0
    
    # c에서 2개씩 짝지어서 power를 구함.
    c = list(c)
    for i in range(len(c)):
        for j in range(i+1, len(c)):
            a = c[i]
            b = c[j]
            power+= (arr[a][b]+arr[b][a])
    return power


def solve(N: int):
    min_diff = 5500
    T = list(C(list(range(N)), N//2))
    T.sort()
    # print(T)
    for i in range(len(T)//2):
        # U = [ i for i in range(N)] 라 하자
        t= T[i]         # t
        t_c = T[-i-1]   # U-t
        # print(t, t_c, end=' / ')
        A = get_power(t)    # A팀 파워
        B = get_power(t_c)  # B팀 파워
        # print(A, B, end ='\n')
        diff = abs(A-B)
        if diff < min_diff:
            min_diff = diff

    
    return min_diff

print(solve(N))