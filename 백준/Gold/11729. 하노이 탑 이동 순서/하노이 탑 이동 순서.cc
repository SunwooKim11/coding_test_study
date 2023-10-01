#include <iostream>

using namespace std;
	
void hanoi(int n, int x, int y, int z){
    if(n==1){
        cout << x << " " << z <<"\n";
    }
    else{
        hanoi(n-1, x, z, y);
        hanoi(1, x, y, z);
        hanoi(n-1, y, x, z);
    }
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int N;

    cin >> N;
    // cout << (~0 << N) << "\n";
    // cout << ~(~0 << N) << "\n";
    cout << ((~(1<<N)) &(~(~0 << N)))<< "\n";
    hanoi(N, 1, 2, 3);
	
}
// https://stackoverflow.com/questions/13221369/logical-shift-right-on-signed-data