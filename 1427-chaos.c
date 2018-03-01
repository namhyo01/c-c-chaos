#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <utility>
#include <functional>
using namespace std;

int main()
{
	int n, c = 0;
	cin >> n;
	//vector<int> arr(11);
	int arr[11];
	while (n != 0)
	{
		int d = n % 10;
		arr[c] = d;
		n /= 10;
		c++;
	}
	sort(arr, arr+c);
	n = 0;
	for (int i = c - 1; i >= 0; i--)
	{
		cout << arr[i];
	}
//	system("pause");
	return 0;
}