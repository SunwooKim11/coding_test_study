#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <bits/stdc++.h>
#include <limits>



using namespace std;
typedef long long ll;
typedef vector <ll> llv1;

ll init(llv1& nums, llv1& tree, int start, int end, int node){
    if(start == end) return tree[node] = nums[start];
    int mid = (start+end) / 2;
    return tree[node] = init(nums, tree, start, mid, node * 2) + init(nums, tree, mid+1, end, node*2+1);
    // 재귀적으로 
}

ll sum(llv1& tree, int start, int end, int node, int left, int right){
    // 범위 밖에 있을 때
    if(left>end || right < start) return 0;
    // 범위 안에 있을 때
    if(left <= start && end <= right) return tree[node];
    // 그렇지 않을 때 두 부분으로 나눠서 합 구하기
    int mid = (start+end) / 2;
    return sum(tree, start, mid, node*2, left, right) + sum(tree, mid + 1, end, node*2+1, left, right);
}

void update(llv1& tree, int start, int end, int node, int index, ll diff){
    // 범위 밖일 때
    if(index < start || index > end) return;
    // 범위 안에 있으면 내려가며 다른 원소도 갱신
    tree[node] += diff;
    if(start == end ) return;
    int mid = (start + end) / 2;
    update(tree, start, mid, node *2, index, diff);
    update(tree, mid+1, end, node*2+1, index, diff);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int a, b, N, M, K;
    ll buff, c, result;
    llv1 nums;



    cin >> N >> M  >> K;

    for (int i = 0; i < N; i++)
    {
        cin >> buff;
        nums.push_back(buff);
    }

    // make segment tree
    llv1 tree(nums.size()*4);
    init(nums, tree, 0, nums.size()-1, 1);


    for (int i = 0; i < M+K; i++)
    {
        cin >> a >> b >> c;
        switch (a)
        {
        case 1:
            // update
            update(tree, 0, nums.size()-1, 1, b-1, c - nums[b-1]);
            nums[b-1] = c;
            break;
        
        default:
            // sum
            result = sum(tree, 0, nums.size()-1, 1, b-1, c-1);
            cout << result << '\n';

            break;
        }
    }
       
    
}