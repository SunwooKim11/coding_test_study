#include <iostream>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int k, n, m, diff;

    cin >> k >> n >> m;

    diff = k*n - m;

    if(diff<=0) cout << 0;
    else cout << diff;

}