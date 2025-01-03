
# 입력
N = int(input())
arr =[ list(map(int, input().split())) for _ in range (N)]
# 연산
def get_num_sqaures(arr, x, y, size) -> list:

    S = sum([sum(row[x:x+size]) for row in arr[y:y+size]]) # 정사각형 전체 합(필요 연산)
    # 종료 조건
    if S == 0:
        return 1, 0
    elif S == size*size:
        return 0, 1
    else:
        half = size//2 # 필요연산
        w1, b1 = get_num_sqaures(arr, x, y, half)
        w2, b2 = get_num_sqaures(arr, x+half, y, half)
        w3, b3 = get_num_sqaures(arr, x, y+half, half)
        w4, b4 = get_num_sqaures(arr, x+half, y+half, half)

        w = w1 + w2 + w3 + w4
        b = b1 + b2+ b3+ b4
        return w, b

# 출력
n_white, n_blue =get_num_sqaures(arr, 0, 0, N)
print(n_white)
print(n_blue)