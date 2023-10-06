#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n, rst = 0;
    int* a;
    int* b;

    cin >> n;
    a = new int[n];
    b = new int[n];

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    sort(a, a+n);
    sort(b, b+n, greater<int>());

    for (int i = 0; i < n; i++)
    {
        rst += a[i]*b[i];
    }
    
    cout << rst;

    delete[] a;
    delete[] b;
    
}

// a를 오름차순, b를 내람차순으로 정렬한후 각원소를 곱하면 최솟값이 나온다.
// 직관적으로 큰값하고 작은값하고 곱해야지 전체 합이 최소가 되기 때문,, 
// 수학적으로 엄밀한 증명은 모르겠다.