MAX_NUM = 10001
isPrime = [True]*10001 # [1, 10000]의 소수 리스트

def primeNumberSieve():
    # // 2. 2부터 시작해서 특정 수의 배수에 해당하는 수를 모두 지운다.
    # // (지울 때 자기자신은 지우지 않고, 이미 지워진 수는 건너뛴다.)
    for i in range(2, MAX_NUM):
        if(isPrime[i] == False): # 이미 지워진 수라면 건너뛰기
            continue 
        # // 이미 지워진 숫자가 아니라면, 그 배수부터 출발하여, 가능한 모든 숫자 지우기

        for j in range(2*i, MAX_NUM, i):
            isPrime[j] = False

primeNumberSieve()
n = int(input())
input_arr = []
ans_pair = [0, 0]
for _ in range(n):
    m = int(input())
    input_arr.append(m)
    
for k in input_arr:
    if(k==4):
        print('2 2')
        continue
    p = 3
    k_half = k//2
    ans_pair[0] = 0
    ans_pair[1] = 0
    while(p<=k_half): # p + q = k, p<=k//2
        if(isPrime[p] and isPrime[k-p]): # p, q가 모두 소수일 경우
            ans_pair[0] = p
            ans_pair[1] = k-p
        p+=2
    print(ans_pair[0], ans_pair[1])