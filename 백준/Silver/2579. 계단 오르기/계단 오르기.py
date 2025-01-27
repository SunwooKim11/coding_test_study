import sys
input = sys.stdin.readline

n = int(input())
stairs = [0] + [int(input()) for _ in range(n)] + [0]
dp = [0] * (n+2)
dp[1] = stairs[1]
dp[2] = dp[1] + stairs[2]

for i in range(3, n+1):
    # i번쨰 계단을 2칸으로 올라온 경우, 1칸으로 올라온 경우
    dp[i] = max(dp[i-2], dp[i-3] + stairs[i-1]) + stairs[i]
print(dp[n])