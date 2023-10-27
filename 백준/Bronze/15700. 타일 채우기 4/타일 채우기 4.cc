#include <iostream>

using namespace std;
typedef unsigned long long ull;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    ull n, m;

    cin >> n >> m;

    cout << (ull)(n*m / 2);
    
}

// 사칙연산
// 잘 안풀릴 때는, 예제 먼저 건들여보자.
// 범위가 log2(10^18 /2) = 58 bit 까지 가능
// 자료형 조절 필요