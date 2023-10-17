#include <iostream>


using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int N, K, cnt = 0;
    int coins[10];;

    cin >> N >> K;

    for (int i = 0; i < N; i++)
    {
        cin >> coins[i];
    }
    
    for (int i = N-1; i >-1; i--)
    {
        cnt += K/coins[i];
        K %= coins[i];
    }
    
    cout << cnt;
    
}
//  greedy algorithm