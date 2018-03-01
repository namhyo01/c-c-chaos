#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int check_minsu(int n);
int main()
{
	int n;
	cin >> n;
	while (n >= 4)
	{
		if (check_minsu(n) == 1)
		{
			cout << n << endl;
			break;
		}
		n--;
	}
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