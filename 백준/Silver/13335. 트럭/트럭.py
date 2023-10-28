
from collections import deque

def move_truck(queue, w):
    # Remove the weight of the truck leaving the queue
    curr_l[0] -= queue.pop()


def is_empty(queue, w):
    return sum(queue) > 0

n, w, l = map(int, input().split())
trucks = list(map(int, input().split()))
arr_queue = deque([0] * w)

idx = 0
rst = 0
curr_l = [0]

while idx < n or is_empty(arr_queue, w):
    move_truck(arr_queue, w)
    rst += 1

    # 다리위에 트럭이 더 올라갈 수 있을 때
    if idx < n and curr_l[0] + trucks[idx] <= l:
        arr_queue.appendleft(trucks[idx])
        curr_l[0] += trucks[idx]
        idx += 1
    else: # 트럭이 올라가지 않으면, queue을 0(빈공간)으로 채우기.
        arr_queue.appendleft(0)

print(rst)

