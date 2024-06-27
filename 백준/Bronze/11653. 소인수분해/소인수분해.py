
MAX_NUM = 10001
isPrime = [True]*10001

def primeNumberSieve():
    # // 2. 2부터 시작해서 특정 수의 배수에 해당하는 수를 모두 지운다.
    # // (지울 때 자기자신은 지우지 않고, 이미 지워진 수는 건너뛴다.)
    for i in range(2, MAX_NUM):
        if(isPrime[i] == False): # 이미 지워진 수라면 건너뛰기
            continue 
        # // 이미 지워진 숫자가 아니라면, 그 배수부터 출발하여, 가능한 모든 숫자 지우기

        for j in range(2*i, MAX_NUM, i):
            isPrime[j] = False

n = int(input())
primeNumberSieve()
m = 2
 
while(n > 1):
    while(n%m == 0): # m으로 다 나눌때 까지
        n = n//m
        print(m)
    m+=1
    while(not isPrime[m] ):
        m+=1
        if(m>=MAX_NUM):
            print(n)
            n = 1 # n //= n
            break