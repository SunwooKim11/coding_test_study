#include <iostream>
using namespace std;


#define MAX_COINS 101
#define MAX_CAHNGE 10001

int coins[101] ={0,};

int countCoinExchange(int numDiffCoins, int change){
    int i, j;
    int N[MAX_CAHNGE] ={0, };

    // base case
    N[0]=1;
    // N[j] -> S(N[j-coins[0]] + N[j-coins[1]] ... _ N[j-coins[numDiffCons]])
    for ( i = 1; i <=numDiffCoins; i++)
    {   
        // 동전의 가치가 100,000까지 범위임.
        // k가 10,000을 넘어가면 볼 필요가 없음.
        if(coins[i]>10000) continue;
        for ( j = coins[i]; j <=change; j++)
        {
            
            N[j] += N[j-coins[i]];
        }
        
    }
    return N[change];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k;

    cin >> n >> k;

    for (int i = 1; i < n+1; i++)
    {
        cin >> coins[i];
    }
    
    cout << countCoinExchange(n, k);

}

// 알고리즘 동전교환문제 2
// N(n, k) = N(n-1, K) + N(n, K-Cn)
// Dynamic Programing

// int [][]을 -> int[]로
// int(coin, charge) table -> int(charge) table로
// ref
// https://velog.io/@silver_star/%EB%B0%B1%EC%A4%80-2293-%EB%8F%99%EC%A0%84-1-DP

