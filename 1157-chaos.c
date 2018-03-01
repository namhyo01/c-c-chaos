#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <utility>
using namespace std;

int main()
{
	string arr;
	cin >> arr;
	int a;
	vector<int> gesu(28,0);
	for (int i = 0; i < arr.size(); i++)
	{
		int e = arr.at(i);
		//cout << e << endl;
		if (e >= 97)
			a = e - 97;
		else
			a = e - 65;
		++gesu[a];
	}
	a = 0;
	for (int i = 0; i < 28; i++)
		a = max(a, gesu[i]);
	int c = 0;
	int d = 0;
	for (int i = 0; i < 28; i++)
	{
		if (a == gesu[i]) {
			c++;
			d = i;
		}
	}
	if (c >= 2) {
		cout << '?';
	}
	else
		printf("%c", d + 65);
	return 0;
}