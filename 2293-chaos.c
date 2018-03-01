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
	vector<int> a(n + 1);
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	vector<int> dp(100001, 0);
	dp[0] = 1;
	for (int i = 1; i <= n; i++)
	{
		for (int j = a[i]; j <= k; j++)
		{
			dp[j] += dp[j - a[i]];
		}
	}
	cout << dp[k];
	return 0;
}
