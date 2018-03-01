#include <iostream>
#include<string>
#include <vector>
#include <algorithm>
#include <utility>
#include <stack>
using namespace std;

int main()
{
	string s, bomb;
	cin >> s >> bomb;
	char result[1000000];
	int j = 0;
	int check = 0;
	for (int i = 0; i < s.size(); i++)
	{
		result[j++] = s[i];
		int len = bomb.size();
		if (s[i] == bomb[--len])
		{
			check++;
			int length = j - bomb.size();
			for (int z = j - 1; z >= length; z--)
			{
				if (result[z] != bomb[len--])
				{
					check = 0;
					break;
				}
				check++;
			}
			if (check != 0)
				j -= bomb.size();
		}
	}
	if (j == 0)
		cout << "FRULA";
	else
	{
		for (int i = 0; i < j; i++)
			cout << result[i];
	}

	//system("pause");
	return 0;
}