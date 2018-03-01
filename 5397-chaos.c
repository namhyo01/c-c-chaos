#include <iostream>
#include<string>
#include <vector>
#include <algorithm>
#include <utility>
#include <stack>
using namespace std;

int main()
{
	int n;
	cin >> n;
	stack<char> pass;
	stack<char> password;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		for (int j = 0; j < s.size(); j++)
		{
			char a = s.at(j);
			if ((a >= 'A'&&a <= 'z') || (a >= '0'&&a <= '9')) {
				pass.push(a);
				continue;
			}
			if (a == '<' && !pass.empty())
			{
				password.push(pass.top());
				pass.pop();
				continue;
			}
			if (a == '>' && !password.empty())
			{
				pass.push(password.top());
				password.pop();
				continue;
			}
			if (a == '-' && !pass.empty())
			{
				pass.pop();
				continue;
			}
		}
		while (!pass.empty())
		{
			password.push(pass.top());
			pass.pop();
		}
		while (!password.empty())
		{
			cout << password.top();
			password.pop();
		}
		cout << endl;
	}


	//system("pause");
	return 0;
}