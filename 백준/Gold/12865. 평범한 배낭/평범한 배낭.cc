#include<iostream>
#include<algorithm>
using namespace std;

int N, K;
int DP[101][100001];
int W[101];
int V[101];

// DP[0][0] = 0;
// DP[i][j] =  max(DP[i-1][j], DP[i-1][j-W[i]])
// ref) https://cocoon1787.tistory.com/206

// 동전교환문제 1처럼 풀면 안되는 이유
// -> (w, v)의 종류의 짐 개수가 무한하다고 여기기 때문임.
// 따라서 i번쨰 짐을 포함할때, 포함하지 않을 때로 구분해야함.


int main()
{
	cin >> N >> K;
    DP[0][0] = 0;

	for (int i = 1; i <= N; i++)
		cin >> W[i] >> V[i];

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= K; j++)
		{
			 
			 if (j - W[i] >= 0) DP[i][j] = max(DP[i - 1][j], DP[i - 1][j - W[i]] + V[i]);
			 else DP[i][j] = DP[i - 1][j];
		}
	}

	cout << DP[N][K];

}