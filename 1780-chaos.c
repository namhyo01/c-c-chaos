#include <iostream>
#include <stdio.h>
using namespace std;
int n;
int box[2188][2188];
int result[3];
int check(int begin, int end, int begin2, int end2)
{
	int start = box[begin][begin2];
	for (int i = begin; i <= end; i++)
	{
		for (int j = begin2; j <= end2; j++)
		{
			if (box[i][j] != start)
				return -10;
		}
	}
	return start;
}

void sol(int begin, int end, int begin2, int end2)
{
	int num = check(begin, end, begin2, end2);
	if (num == -10)
	{
		int divide = (end - begin + 1) / 3;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				sol(begin + i*divide, begin + i*divide+divide-1, begin2 + j*divide, begin2 + j*divide+divide-1);
			}
		}
	}
	else
	{
		if (num == 0)
			result[1]++;
		else if (num == -1)
			result[0]++;
		else
			result[2]++;
	}
}

int main()
{
	cin >> n;
	result[0] = 0;
	result[1] = 0;
	result[2] = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			scanf("%d",&box[i][j]);
	}
	sol(0, n - 1, 0, n - 1);
	cout << result[0] << endl;
	cout << result[1] << endl;
	cout << result[2] << endl;
    return 0;
}