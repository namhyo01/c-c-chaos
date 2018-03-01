#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;

int n;
int c;
vector<int> x;


int main()
{

	cin >> n>>c;
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		x.push_back(k);
	}
	sort(x.begin(), x.end());
	int l = 1;
	int r = x[n - 1] - x[0];
	while (l < r)
	{
		int mid = (l + r + 1) / 2;
		int a = x[0];
		int count = 0;
		for (int i = 1; i < n; i++)
		{
			if (x[i] - a >= mid) {
				count++;
				a = x[i];
			}
		}
		if (count >= c-1)
			l = mid;
		else
			r = mid - 1;
	}
	cout << l;
//	system("pause");
	return 0;
}