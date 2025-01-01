N, M = list(map(int, input().split()))
K = 4
# 1, 2, 3,4 -> 0,1, 2, 3 나머지, 몫 연산 쉽게하기위함.
N -=1
M -=1

n_i, n_j = N%K, N//K
m_i, m_j = M%K, M//K
# print(n_i, n_j)
# print(m_i, m_j)

dist = abs(n_i-m_i) + abs(n_j-m_j) # 맨해튼 거리
print(dist)