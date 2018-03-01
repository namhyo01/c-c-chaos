#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> k(4, 0);
	int j = 1;
	int count = 0;
	while (j <= n)
	{
		int l = j;
		int _count = 0;
		for (int i = 0; i < 4; i++)
		{
			k[i] = l % 10;
			l = l / 10;
			_count++;
			if (l == 0)
				break;
		}
		if (_count == 1 || _count == 2) {
			count++;
		}
		else {
			int cnt = 0;
			int temp = k[0] - k[1];
			for (int i = 1; i < _count - 1; i++)
			{
				if (temp != k[i] - k[i + 1]) {
					cnt = 0;
					break;
				}
				cnt++;
			}
			if (cnt != 0)
				count++;
		}
		j++;
	}
	cout << count;

}