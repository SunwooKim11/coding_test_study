#include <iostream>
#include <cstring>

#define MAX_LENGTH 1001
#define MAX(a,b) ((a) > (b) ? (a) : (b))

using namespace std;

int L[MAX_LENGTH][MAX_LENGTH];  


int lengthLCS(char s[], char t[], int m, int n){
    int i, j;
    // basecase
    for (i = 0; i <=m; i++) L[i][0] = 0;
    for (i = 0; i <=n; i++) L[0][i] = 0;

    // recursive case
    for ( i = 1; i <=m; i++)
    {
        for ( j = 1; j <=n; j++)
        {
            if(s[i-1] == t[j-1]){ // 2. when common alphabet 
                L[i][j] = L[i-1][j-1] + 1;
            }else{
                L[i][j] = MAX(L[i-1][j], L[i][j-1]);
            }
        }
        
    }
    return L[m][n];
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    char s[1001], t[1001];
    // string s, t;

    cin >> s >> t;
    // cout << strlen(s) << " " <<  strlen(t);

    cout << lengthLCS(s, t, strlen(s), strlen(t));
   
}

// 22m
// 알고리즘 수업, LCS
// ref) get char array length
// https://stackoverflow.com/questions/21022644/how-to-get-the-real-and-total-length-of-char-char-array