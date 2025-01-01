arr = []
w=''
vowels = ['a', 'e', 'i', 'o', 'u']
while w != '#':
    w =input()
    arr.append(w.lower()) # 모음인지를 판단하기 위해 문장 전체 소문자화
arr.pop() # w 제거

for sen in arr:
    cnt = 0
    for x in sen:
        cnt += 1 if x in vowels else 0
    print(cnt)
