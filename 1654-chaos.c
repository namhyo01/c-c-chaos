#include<iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <string>
#include <climits>
using namespace std;

int main()
{
	int n, k;
	long long max = 0;
	long long answer=0;
	cin >> k >> n;
	long long lan[10001];
	for (int i = 0; i < k; i++)
		cin >> lan[i];
	long long left = 0;
	long long right = LLONG_MAX;
	while (left <= right)
	{
		long long mid = (left + right) / 2;
		long long result = 0;
		for (int i = 0; i < k; i++)
			result += lan[i] / mid;
		if (result >= n)
		{
			if (answer < mid)
				answer = mid;
			left = mid + 1;
			continue;
		}
		if (result < n)
		{
			right = mid-1;
			continue;
		}
	}
	cout << answer;
	return 0;
}
