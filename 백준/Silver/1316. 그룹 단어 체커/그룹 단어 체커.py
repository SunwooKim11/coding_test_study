N = int(input())
words = [input() for _ in range(N)]
cnt = 0

for i in range(len(words)):
    isGroup = True
    # U = set(words[i])
    A = [words[i][0]] # 초기값은 무조건 push, A는 연속등장을 만족하는 알파벳 집합
    for j in range(1, len(words[i])):
        # print(words[i][j-1], words[i][j]) # debug
        if(words[i][j-1]!= words[i][j]):
            if words[i][j] in A:
                isGroup=False
                break
            else:
                A.append(words[i][j])
        # print(A) # debug
    # print(A, isGroup) # debug
    if isGroup :
        cnt +=1
    # 그룹 단어인지 확인:
    # if(len(U) == len(A)):
    #     cnt+=1

print(cnt)