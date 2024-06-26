def dfs():
    global n, m, s, visited
    if(len(s)) == m:
        print(' '.join(map(str, s)))
    else:
        for i in range(1, n+1):
            if(visited[i] or (len(s)>0 and s[len(s)-1]>i)):
                continue
            visited[i] = True
            s.append(i)
            dfs()
            s.pop()
            visited[i] = False

n, m = map(int, input().split())
s = []; visited = [False]*(n+1)

dfs()
