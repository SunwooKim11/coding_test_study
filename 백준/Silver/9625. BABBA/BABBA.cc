#include <iostream>

#define MAX_K 46

using namespace std;

void printRst(int* A, int* B, int k){
    
    // base case;
    A[0] = 1, A[1] = 0;
    B[0] = 0, B[1] = 1;

    for (int i = 2; i <= k; i++)
    {
        A[i] = A[i-1 ]+ A[i-2];
        B[i] = B[i-1] + B[i-2];
    }
    

    
    cout << A[k] << " " << B[k];

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int A[MAX_K], B[MAX_K], k;

    cin >> k;

    printRst(A, B, k);
    
}



// 15m
// dynamic programming

// A(n), B(n)은 각각 n일때의 A, B의 개수를 나타내는 함수

// A(n) = B(n-1)
// B(n) = A(n-1) + B(n-1)

// -> 점화식유도
// A[i] = A[i-1 ]+ A[i-2];
// B[i] = B[i-1] + B[i-2];
