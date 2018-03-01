#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main()
{
	unsigned int a, b, count = 0;
	cin >> a >> b;
	while (a <= b)
	{
		int _check = 0;
		int temp = a % 10;
		if (temp != 4)
		{
			if (temp != 7) {
				a++;
				continue;
			}
		}
		int l = a;
		while (l > 0)
		{
			int k = l % 10;
			l = l / 10;
			if (k == 4 || k == 7)
				continue;
			else
			{
				_check = 1;
				break;
			}
		}
		if (_check == 0)
			count++;
		a++;
	}
	cout << count << endl;
	return 0;
}

int check_minsu(int n)
{
	while (1)
	{
		int k = n % 10;
		n = n / 10;
		if (n == 0)
		{
			if (k == 4 || k == 7)
				return 1;
		}
		if (k == 4 || k == 7)
			continue;
		else
			return 0;
	}
	return 1;
}