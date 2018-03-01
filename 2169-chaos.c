#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

int map[1000][1000];
int _map[1000][1000];

int main()
{

	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> map[i][j];
		}
	}
	_map[0][0] = map[0][0];
	for (int i = 1; i < m; i++)
		_map[0][i] = map[0][i] + _map[0][i - 1];
	int result1[1000], result2[1000];
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			result1[j] = result2[j] = _map[i - 1][j] + map[i][j];//위에서 오는 것을 더함
		}
		for (int j = 1; j < m; j++)
		{
			result1[j] = max(result1[j], result1[j - 1] + map[i][j]);//왼쪽비교
		}
		for (int j = m - 1; j > 0; j--)
		{
			result2[j - 1] = max(result2[j - 1], result2[j] + map[i][j-1]);//오른쪽 비교
		}
		for (int j = 0; j < m; j++)
		{
			_map[i][j] = max(result1[j], result2[j]);
		}
	}
	cout << _map[n - 1][m - 1];
	//system("pause");
	return 0;
}