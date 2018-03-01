#include<iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <string>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	vector<int> coin(n + 1);
	int dp[100001];
	for (int i = 1; i <= n; i++)
		cin >> coin[i];
	dp[0] = 0;
	for (int i = 1; i <= k; i++)
		dp[i] = 1000000;
	for (int i = 1; i <= n; i++)
	{
		for (int j = coin[i]; j <= k; j++)
		{
			dp[j] = min(dp[j], dp[j - coin[i]] + 1);
		}
	}
	if (dp[k] != 1000000)
		cout << dp[k];
	else
		cout << -1;
	return 0;
}
