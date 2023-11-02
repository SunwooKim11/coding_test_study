#include <iostream>

using namespace std;

#define MAX_N 1001

int binCoeff(int n, int k){
    int C[MAX_N][MAX_N] = {0, };
    int i, j;
    // base case
    for ( i = 1; i <=n; i++) C[i][0] = 1;
    
    for (i = 1; i <=n; i++)
    {
        for (j = 1; j<=i/2; j++)
        {
            // 문제 조건
            C[i][j] = (C[i-1][j-1] + C[i-1][j]) % 10007;
        }
        // nCk = nC(n-k) 이항계수의 성질
        for (j = i/2+1; j <=i; j++)
        {
            C[i][j] = C[i][i-j];
        }
        
    }
    

    return C[n][k];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n, k;

    cin >> n >> k;
    
    cout << binCoeff(n, k);
}

// 15m