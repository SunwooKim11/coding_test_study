def dfs():
    global n, m, s, visited
    if(len(s)) == m:
        print(' '.join(map(str, s)))
    else:
        for i in range(1, n+1):
            if(visited[i]):
                continue
            visited[i] = True
            s.append(i)
            dfs()
            s.pop()
            visited[i] = False

n, m = map(int, input().split())
s = []; visited = [False]*(n+1)

dfs()

# backtracking 으로 방문안한 곳만 하기.
# ref) https://velog.io/@yusuk6185/%EB%B0%B1%EC%A4%80-15649-N%EA%B3%BC-M-1-%ED%8C%8C%EC%9D%B4%EC%8D%AC-with-%EB%B0%B1%ED%8A%B8%EB%9E%98%ED%82%B9
