#include <iostream>
#include <memory.h>
#include <numeric>    

using namespace std;

void moveTruck(int* arr_queue, int w, int& curr_l){
    // 나갈 트럭의 무게 제외 시키기
    curr_l -= arr_queue[w-1];

        for (int i = w-1; i > 0; i--)
    {

        arr_queue[i] = arr_queue[i-1];
    }
    arr_queue[0] = 0;
}

bool isEmpty(int* arr_queue, int w){
    int initial_sum = 0;
    return accumulate(arr_queue, arr_queue+w, initial_sum) > 0;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, w, l, idx = 0, rst = 0, curr_l = 0;
    int* trucks;
    int* arr_queue;
    
    cin >> n >> w >> l;    
    trucks = new int[n];
    arr_queue = new int [w];

    memset(arr_queue, 0, sizeof(int)*w);


    for (int i = 0; i <n; i++)
    {
        cin >> trucks[i];
    }

    while (idx < n || isEmpty(arr_queue, w))
    {
        // 이동시키기
        moveTruck(arr_queue, w, curr_l);
        rst++;

        // 다리에 트럭이 더 올라올 수 있는 경우, 트럭을 올려보내기
        if(idx < n && (curr_l + trucks[idx]) <=l){
            arr_queue[0] = trucks[idx];
            curr_l += trucks[idx];
            idx++;
        } 
    
    }
    
    cout << rst;
        

    delete[] trucks;
    delete[] arr_queue;
    
}