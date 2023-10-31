#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

#define MAX_K 10001
#define MAX_N 101

int C[MAX_K] = {0, };

int getMinCoins(int* coins, int n, int K){
    // base case
    C[0] = 0;
    int minV = K, tmp = 0, rst = -1;
    for (int k = 1; k <=K; k++)
    {   
        minV = k;
        tmp = -1;
        for (int j = 0; j <n ; j++)
        {   
            // out of range
            if(k<coins[j]) continue;
            tmp = C[k-coins[j]];

            if(tmp > -1 && tmp + 1<minV) minV = tmp + 1;
        }
        // tmp값이 -1 인 경우 -> 돈을 만들 수 없다.
        C[k] = (tmp< 0 && minV ==k) ? -1: minV;
    }
    
    
    return C[K];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n, k;
    int coins[MAX_N];

    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
    
    cout << getMinCoins(coins, n, k);
}