import sys	
p = []
while True:
    line = sys.stdin.readline().strip()
    if not line:
        break
    p.append(line)

for i in p:
    print(i)

# boj 11718 그대로 출력하기
# sys.stdin.readline()으로 input() 보다 더 빠르게 입력 받기.
# .strip() => 양 옆 공백 제거하여 반환
# code ref) https://okky.kr/questions/1174019