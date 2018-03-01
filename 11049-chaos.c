#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;

struct matrix
{
	int r;
	int c;
};
#define INF 2100000000
matrix arr[501];
int dp[501][501];

int _matrix(int a, int b)
{
	if (a == b)
		return 0;
	if (dp[a][b] != 0)
		return dp[a][b];
	int data = INF;
	for (int k = a; k < b; k++)
	{
		data = min(data, _matrix(a, k) + _matrix(k + 1, b) + arr[a].r*arr[k].c*arr[b].c);
	}
	return dp[a][b] = data;
}

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].r>>arr[i].c;
	}
	cout << _matrix(0, n - 1);
//	system("pause");
	return 0;
}