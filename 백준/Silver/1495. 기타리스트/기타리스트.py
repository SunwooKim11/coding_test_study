# bottom-up

FALSE = 0
TRUE = 1
N, S, M = map(int, input().split())

v_list = list(map(int, input().split())) # +- 되는 볼륨 리스트트

dp = [[FALSE]*(M+1) for _ in range(N+1)]

# 0~n번째 까지의 가능한 볼륨을 idx로 갖는(가능하면 TRUE) DP리스트
dp[0][S] = TRUE

for i in range(1, N+1):
    for j in range(0, M+1):
        if dp[i-1][j] : # 만약 P(n-1)이 j크기의 볼륨을 가질 수 있는 경우라면
            upper = (j + v_list[i-1])
            lower = (j - v_list[i-1])
            if(0<=upper and upper<=M ):
                dp[i][upper] = TRUE
            if(0<=lower and lower<=M ):
                dp[i][lower] = TRUE

ans = -1
# n번쨰 dp에서 내림차순으로 탐색해나가며 가능한 경우일 때의 index를 찾음
# 찾은 index가 최종 볼륨. 없다면 -1
for j in range(M, -1, -1):
    if dp[N][j] == TRUE:
        ans = j
        break

print(ans)