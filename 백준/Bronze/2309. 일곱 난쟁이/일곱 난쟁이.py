from itertools import combinations as C
# 입력
shorters = [int(input()) for _ in range(9)]
# rst = None
def get_shorters(shorters: list)-> list : 
    for c in C(shorters, 7):
        if(sum(c) == 100):
            rst = sorted(list(c))
            return rst
    return 0

rst = get_shorters(shorters)
print(*rst , sep='\n')
# 출력