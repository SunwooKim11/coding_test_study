#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int x, n, a, b;
    int s = 0;

    cin >> x >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        s +=a*b;
    }
    if (s==x)
    {
        cout << "Yes";
    }else cout << "No";
    
    
}