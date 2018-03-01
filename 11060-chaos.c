#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;


int main()
{
	int n;
	cin >> n;
	vector<int> dp(4*n, 2100000000);
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	dp[0] = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 0)
			continue;
		for (int j = 1; j <= a[i]; j++)
		{
			dp[i + j] = min(dp[i + j], dp[i] + 1);
		}
	}
	if (dp[n - 1] == 2100000000) {
		cout << -1;
		return 0;
	}
	if (n == 1)
		cout << 0;
	else
		cout << dp[n - 1];
	return 0;
}