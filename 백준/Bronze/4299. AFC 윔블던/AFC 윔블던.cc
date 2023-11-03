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
    
    int a, s;
    int x, y, tmp;

    cin >> a >> s;
    x= (a+s)/2;
    y = a - x;

    if((a+s)%2 || y<0) cout << -1;
    else{
        if(x<y){
            tmp = x;
            x = y;
            y = tmp;
        }
        cout << x << " " << y;
    }

    // x = s + y // y = a-x -> x= (a+s)/2
    
}