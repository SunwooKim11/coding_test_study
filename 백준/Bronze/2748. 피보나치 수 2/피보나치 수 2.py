n = int(input())

dp=[0]*(n+1)

# bottom-up
# dp[0] = 0
# dp[1] = 1
# for i in range(2, n+1):
#     dp[i] = dp[i-1] + dp[i-2]


# top-down
def func(n):
    if n<=1:
        # print(n, end=' ')
        return n
    if dp[n]>0:
        # print(dp[n], end=' ')
        return dp[n]
    dp[n] = func(n-1) + func(n-2)
    return dp[n]


# print(dp[n])
print(func(n))