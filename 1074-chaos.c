#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;
int r, c;
int cnt = 0;
void Z(int n,int x, int y);

int main()
{
	int n;
	cin >> n >> r >> c;
	n = 2 << (n - 1);
	Z(n, 0, 0);
	return 0;
}

void Z(int n, int x, int y)
{
	if (n == 2)
	{
		if (x == r&&y == c) {
			cout << cnt;
			return;
		}
		cnt++;
		if (x == r && y+1 == c) {
			cout << cnt;
			return;
		}
		cnt++;
		if (x+1 == r&&y == c) {
			cout << cnt;
			return;
		}
		cnt++;
		if (x +1 == r && y +1 == c) {
			cout << cnt;
			return;
		}
		cnt++;
		return;
	}
	Z(n / 2, x, y);
	Z(n / 2,x,y+n/2);
	Z(n / 2,x+n/2,y);
	Z(n / 2,x+n/2,y+n/2);
}