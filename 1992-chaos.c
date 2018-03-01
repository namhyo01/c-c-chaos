#include<iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <string>
using namespace std;
vector<string> map(70);
void quad(int n, int x1, int y1, int x2, int y2);

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> map[i];
	}
	quad(5, 0, 0, n - 1, n - 1);
	return 0;
}

void quad(int n, int x1, int y1, int x2, int y2)
{
	char check = map[x1].at(y1);

	for (int i = x1; i <= x2; i++)
	{
		for (int j = y1; j <= y2; j++)
		{
			if (check != map[i].at(j))
			{
					cout << "(";
					quad(1, x1, y1, (x1 + x2) / 2, (y1 + y2) / 2);
					quad(2, x1, (y1 + y2) / 2 + 1, (x1 + x2) / 2, y2);
					quad(3, (x1 + x2) / 2 + 1, y1, x2, (y1 + y2) / 2);
					quad(4, (x1 + x2) / 2 + 1, (y1 + y2) / 2 + 1, x2, y2);
					cout << ")";
					return;
			}
		}
	}

	cout << check;
}