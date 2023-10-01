#include <iostream>
#include <cmath>
// f(n) = 2f(n-1) + 1
// f(n) = 2^n - 1
// f(n-1) = 2^(n-1) -1
typedef unsigned long long int ulli;
typedef long double ldu;

using namespace std;

void hanoi(int n, ulli k, int x, int y, int z){
    
    if(n==1 || !k){    
        cout << x << " " << z <<"\n";
    }
    else{
        
        ulli two_n_1= ~((ulli)1 << (n-1));
        if((k>>(n-1)) < 1) hanoi(n-1, k & two_n_1, x, z, y);
        else if(!(k & two_n_1)) hanoi(1, 0, x, y, z);
        else hanoi(n-1, k & two_n_1, y, x, z);
                
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    ulli k;
    
    cin >> n >> k;
    hanoi(n, k, 1, 2, 3);

}

// 1) 1<= k < 2^(n-1)
// 2) k == 2^(n-1) 
// 3) 2^(n-1) < k <2^n 

// 0 <= log2(k) < n-1 //  0, m
// log2(k) == n-1 // 1
// n-1 < log2(k) < n // 1, m

// 2^(n-1)로 구한 몫과 나머지로 

// log2로 하면 소수로 됨. 같을 때를 Else로 걸러버리자.
// -> log2 연산, 2의 나머지 연산을 비트연산을 이용해 속도를 빠르게 하자.
// ~((ulli)1 << (n-1)); 을 해야한다. 그렇지 않으면 정수형을 default로 int로 처리해서 n이 32 때부터 값이 이상해져버린다.
// https://debugjung.tistory.com/entry/%EB%B9%84%ED%8A%B8%EC%97%B0%EC%82%B0%EC%9C%BC%EB%A1%9C-%EC%82%B0%EC%88%A0%EC%97%B0%EC%82%B0-%EB%B9%A0%EB%A5%B4%EA%B2%8C-%EC%B2%98%EB%A6%AC%ED%95%98%EA%B8%B0