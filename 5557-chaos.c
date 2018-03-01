#include<iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <string>
using namespace std;
vector<int> arr(100);
long long solve(int s, int val);
long long dp[1001][1001];
int n;
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < 1001; i++)
		for (int j = 0; j < 1001; j++)
			dp[i][j] = -1;
	cout<< solve(1, arr[0]);
	return 0;
}

long long solve(int s, int val)
{
	if (val > 20)
		return 0;
	if (val < 0)
		return 0;
	if (s == n-1)
	{
		if (val == arr[n-1]) {
			dp[s][val] = 1;
		}
		else
		{
			dp[s][val] = 0;
		}
		return dp[s][val];
	}
	if (dp[s][val] != -1)
		return dp[s][val];
	long long result = 0;
	result += solve(s + 1, val + arr[s]) + solve(s + 1, val - arr[s]);
	return dp[s][val] = result;
}

