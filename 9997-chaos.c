#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int bit[26];
int cnt = 0;
int n;
void check_gesu(int off, int mask)
{
	int check;
	check = (1<<26)-1;
	if (mask == check)
	{
		cnt+=pow(2,n-1-off);
		return;
	}
	if (off == n-1)
	{
		return;
	}
	check_gesu(off + 1, mask | bit[off+1]);
	check_gesu(off + 1, mask);
}


int main()
{
	cin >> n;
	string a;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		bit[i] = 0;
		for (int j = 0; j < a.size(); j++)
		{
			int k = 1;
			int d = a.at(j) - 97;
			k <<= d;
			bit[i] = bit[i] | k;
		}
	}
	for (int i = 0; i < n; i++)
		check_gesu(i, bit[i]);
	cout << cnt<<endl;
	return 0;
}