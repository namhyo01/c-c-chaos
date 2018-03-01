#include<stdio.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	//int count = 0;
	vector<int> lis;
	cin>>n;
	vector<int> s(n);
	for (int i = 0; i < n; ++i)
		cin >> s[i];
	lis.push_back(s[0]);
	for (int i = 1; i < n; ++i)
	{
		if (lis.back() < s[i])
			lis.push_back(s[i]);
		else
			*lower_bound(lis.begin(), lis.end(), s[i]) = s[i];//상한선 찾기
	}
	cout << lis.size();
	return 0;
}