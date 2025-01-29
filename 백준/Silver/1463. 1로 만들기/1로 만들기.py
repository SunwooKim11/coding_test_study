import sys

x = int(sys.stdin.readline())

dp = [0]* (x+1) # 최소 연산횟수 결과 저장 Table
def func(x): # 최소연산횟수를 구하는 함수
    # 종료조건
    if dp[x] or x == 1:
        return dp[x] 

    if x%3 == 0 and x%2 == 0: # 6의 배수인 경우
        dp[x] = min(func(x//3) + 1, func(x//2) + 1)
    elif x%3 == 0: # 6의 배수가 아니고 3의 배수인 경우만
        dp[x] = min(func(x//3) + 1, func(x-1) + 1)
    elif x%2 == 0: # 6의 배수가 아니고 2의 배수인 경우만
        dp[x] = min(func(x//2) + 1, func(x-1) + 1)
    else:
        dp[x] = func(x-1) + 1

    return dp[x]

print(func(x))