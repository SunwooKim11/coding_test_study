#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    string* s;

    cin >> n;

    s = new string[n+1];

    for (int i = 0; i <n+1; i++)
    {
        getline(cin, s[i]);
    }

    for (int i = 1; i <= n; i++)
    {
        cout << i << ". " << s[i] << "\n";
    }
        
    delete[] s;
    
}

//1차시도 23.10.22 5m
//왜 s[0]이 비어있는가?