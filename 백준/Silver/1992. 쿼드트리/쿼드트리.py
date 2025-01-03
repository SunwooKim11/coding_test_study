
# 입력
import sys
N = int(input())
arr =[ list(map(int, list(sys.stdin.readline().rstrip()))) for _ in range (N)]
# 연산
def get_quard_tree(arr, x, y, size) -> list:

    S = sum([sum(row[x:x+size]) for row in arr[y:y+size]]) # 정사각형 전체 합(필요 연산)
    # print(S) # for debug
    # 종료 조건
    if S == 0:
        return "0"
    elif S == size*size:
        return "1"
    else:
        half = size//2 # 필요연산
        # 재귀 호출출
        w1 = get_quard_tree(arr, x, y, half)
        w2 = get_quard_tree(arr, x+half, y, half)
        w3 = get_quard_tree(arr, x, y+half, half)
        w4 = get_quard_tree(arr, x+half, y+half, half)
        # concat(합체)
        return f"({w1}{w2}{w3}{w4})"

# 출력
quard_tree = get_quard_tree(arr, 0, 0, N)
print(quard_tree)
