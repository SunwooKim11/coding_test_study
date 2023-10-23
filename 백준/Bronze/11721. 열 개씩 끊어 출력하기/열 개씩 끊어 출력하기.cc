#include <iostream>
#include <algorithm>
#include <string>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string sen;

    cin >> sen;

    for (int i= 0; i < sen.size(); i++)
    {
        cout << sen[i];
        if((i+1)%10 == 0) cout <<"\n";
    }
    
    
}