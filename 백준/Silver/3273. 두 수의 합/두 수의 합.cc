#include <iostream>
#include <vector>
#include <map>
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
    
    int n, x, tmp, diff, rst = 0;

    map<int, int> m;

    // 0. map에 입력하자. python dict 같은놈
    // ref) https://life-with-coding.tistory.com/305

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        m.insert({tmp, i});
    }
    cin >> x;

    // 1. map의 모든 원소를 순회하며 조건에 맞을 때마다 rst++;
    for (auto iter = m.begin() ; iter !=  m.end(); iter++)
    {
	
        diff = x- iter->first;
        // diff에 해당하는 원소가 있거나, 그 원소가 입력됬을 때 기준, iter->first보다 더 늦게 입력되었는지.(index가 더 큰지)
        // map은 insert할때마다 정렬해주므로, 탐색시 이진탐색 -> O(logn)
        if(m.find(diff) != m.end() && m[diff] > iter->second) rst++;
    }

    cout << rst;
}

