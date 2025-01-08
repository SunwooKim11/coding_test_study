import math
from itertools import combinations_with_replacement as H
T = int(input())
K_list = [int(input()) for _ in range(T)]

def get_n(k):
    return math.ceil(math.sqrt(2*k+0.25) - 0.5)

def get_T_list(n):

    return [i*(i+1)//2 for i in range(1, n)]

def check_by_three(k):
    n = get_n(k)
    # print(n)
    three_num_list = list(H(get_T_list(n), 3))
    # print(three_num_list)

    for pair in three_num_list: # 삼각수 3개로 표현 가능한 경우
        if(k == sum(pair)):
            return 1
    return 0 # 그렇지 않을 경우

def solve(K_list: list):
    result = [check_by_three(k) for k in K_list]
    return result

print(*solve(K_list), sep='\n')