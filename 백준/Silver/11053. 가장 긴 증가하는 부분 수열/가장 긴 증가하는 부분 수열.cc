#include <iostream>

using namespace std;

#define MAX_N 1001

int LIS(int* arr, int* dp, int n){
    //base case
    // intialize dp all 1
    int i, j;

    int maxV = 0;
    for ( i = 1; i <= n; i++)
    {   
        dp[i] = 1;
        for (j = 1; j<i; j++)
        {
            if(arr[i] > arr[j] &&  dp[i] <= dp[j]){
                dp[i] = dp[j] + 1;
            }
        }
        
    }
    
    // get max
    for (i = 1; i <= n; i++)
    {
        maxV = (maxV< dp[i]) ? dp[i] : maxV;
    }
    
    return maxV;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    int arr[MAX_N];
    int dp[MAX_N];
    
    cin >>n;
    for (int i = 1; i <=n; i++)
    {
        cin >> arr[i];
        dp[i] = 1;
    }

    cout << LIS(arr, dp, n);
    
}
// ref
// https://regularmember.tistory.com/167