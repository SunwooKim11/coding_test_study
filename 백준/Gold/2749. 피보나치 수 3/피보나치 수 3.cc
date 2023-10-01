#include <iostream>

#define K 1000000
using namespace std;

typedef unsigned long long ull;

ull fibo0[2][2] = {
    {1, 1},
    {1, 0}
};

ull rst1[2][2] = {0, 0 ,0, 0};
ull rst2[2][2] = {0, 0, 0 ,0};


ull (*get_arr2(ull n))[2]{
    ull temp2[2][2] = {0, 0, 0, 0};
    

    if (n<=1) return fibo0;
    else{
        // for deep copy temp2 = getarr();
        ull (*temp1)[2] = get_arr2(n/2);
        
        for (ull i = 0; i <2 ; i++)
            for (ull j = 0; j<2; j++){
                
                temp2[i][j] = temp1[i][j];  
            }
                      
        }
        
    // 행렬연산
    // matrix(fn+1) = matrix(fn/2)*matrix(fn/2)
    for (ull i = 0; i < 2; i++)
        for (ull j = 0; j < 2; j++){
            rst1[i][j] = 0;
            rst2[i][j] = 0;
       
            for (ull k = 0; k < 2; k++)
            {
                // 마지막 3자리까지만 표시
                rst1[i][j] += temp2[i][k] * temp2[k][j] % K;
            }              
        }
    // if n is odd
    if(n%2){
        for (ull i = 0; i < 2; i++)
            for (ull j = 0; j < 2; j++)
                for (ull k = 0; k < 2; k++)
                {
                    rst2[i][j] += rst1[i][k] * fibo0[k][j] % K;
                }  
        return rst2;
    }
    // if n is even
    return rst1;
}



ull fast_fibo(ull n){
    if(!n) return 0;
    return get_arr2(n)[0][1]%K;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ull n;
    cin >> n;
    cout << fast_fibo(n) << endl;
    
    return 0;
}

