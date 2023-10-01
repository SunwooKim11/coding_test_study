from collections import deque

case = int(input())

for i in range(case):

    isReversed = False
    isError = False

    p=input()
    n=int(input())
    arr = eval(input())
    queue = deque(arr)
    # print(arr)
    # print(queue)
    for func in p:
        # print(func)
        if func == 'R':
            isReversed = not isReversed
        elif func == 'D':
            if len(queue) < 1:
                isError = True
                break
            elif isReversed:
                queue.pop()
            else:
                queue.popleft()

    if isError:
        print('error')
        continue

    if isReversed:
        queue.reverse()

    print(str(list(queue)).replace(' ', ''))