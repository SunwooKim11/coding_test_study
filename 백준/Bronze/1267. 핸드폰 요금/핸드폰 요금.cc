#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, t;
    int cost_Y = 0, cost_M = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        cost_Y += (t/30 +1) *10;
        cost_M += (t/60 + 1) * 15;
    }
    
    if(cost_Y<cost_M) cout << "Y " << cost_Y;
    else if(cost_Y > cost_M) cout << "M " << cost_M;
    else cout << "Y M "<< cost_Y;

}