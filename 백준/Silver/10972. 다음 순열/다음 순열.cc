#include <iostream>

using namespace std;

void swap(int& a, int& b)
{ 
    int tmp = a;
    a = b;
    b = tmp;
} 

void insertionSort(int a[], int start, int end)
{ 
    for (int i=start+1; i<end+1; i++)
        {   
            for (int j = i; j>start && a[j-1] > a[j]; j--)
            {
               swap(a[j-1], a[j]);
            }
        }
}

void findNextPermutation(int arr[], int n){

    int i, j;
    // 1. find R and index just in front of R
    for (i = n-1 ; i>0 && arr[i-1]>=arr[i] ; i--);

    // 2. R == arr, arr is max
    if(!i || n==1) {
        cout << -1;
        return;
    }
    i--;
    j=n-1;
    // 3. find min value which is bigger than arr[i]
    while(arr[i] > arr[j]){
        
        j--;
    }

    // cout << i << " " << j << endl;
    swap(arr[i], arr[j]);

    insertionSort(arr, i+1, n-1);
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int* arr;
    int n, t;

    cin >> n;
    arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        arr[i] = t;
    }
    
    findNextPermutation(arr, n);
    
    delete[] arr;
}