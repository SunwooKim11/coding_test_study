#include <iostream>

using namespace std;

#define MAX_N 1001

int domino(int* C, int n){
    // base case
    C[0] = 0; C[1]=1; C[2] = 2;

    for (int i = 3; i <=n; i++)
    {
        C[i] = (C[i-1] + C[i-2]) % 10007;
    }
    

    return C[n];
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int C[MAX_N], n;
    

    cin >> n;

    cout << domino(C, n);
}

// 알고리즘 수업  - domino 타일 채우기
// dynamic programing
// C(n) = C(n-1) + C(n-2) / 2x1 1개 채우고 나머지 & 1x2 개 채우고 나머지