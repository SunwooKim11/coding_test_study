#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int h[9];
    int x, y, rst = 0;
    bool getAns = false;
    vector<int> v;
    
    for (int i = 0; i < 9; i++)
    {
        cin >> h[i]; 
        rst += h[i];
    }

    for (int i = 0; !getAns && i < 9; i++)
    {
        for (int j = i+1; j<9; j++)
        {
            if(rst-h[i]-h[j] == 100){
                getAns = true;
                x=i;
                y=j;
                break;
            }
        }
    }
    
    for (int i = 0; i < 9; i++)
    {
        if(i == x || i == y) continue;

        v.push_back(h[i]);
    }
    
    sort(v.begin(),v.end());

    for (auto iter = v.begin(); iter != v.end(); iter++)
    {
        cout << *iter << endl;
    }
    
    
}