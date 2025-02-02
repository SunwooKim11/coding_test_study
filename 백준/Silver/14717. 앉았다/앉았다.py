from itertools import permutations

card = list(range(1, 11)) * 2  # 카드풀 생성
my_card = list(map(int, input().split()))  # 내가 뽑은 카드
card.remove(my_card[0])
card.remove(my_card[1])

rank = list(permutations(card, 2))  # 순열을 이용해서 족보 생성
rank.sort(key=lambda x: (x[0] == x[1], (x[0] + x[1]) % 10, x[0]))

# 내 카드가 땡일때
if my_card[0] == my_card[1]:  
    print('%.3f' % (1 - ((10 - my_card[0]) * 2) / len(rank)))
# 땡이 아닐때
else:                        
    c = 0
    for r in rank:
        if sum(r) % 10 >= sum(my_card) % 10:  # 내가 뽑은 패와 같아지면 카운트 stop
            break
        else:
            c += 1
    print('%.3f' % (c / len(rank)))  # 카운트 / 전체 경우
