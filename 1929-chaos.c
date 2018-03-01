#include <stdio.h>
#include <math.h>

#pragma warning(disable: 4996)
int sosu(int i)
{
	int j,div = 0;
    j = sqrt(i);
    for(div = j;i%div;div--);
    if (i == 1) return 0;
    else if(div == 1) return 1;
    else return 0;
}
int main()
{
	int m, n, i, j;
	scanf("%d %d", &m, &n);
	for (i = m; i <= n; i++)
	{
		if (sosu(i))
			printf("%d\n", i);
	}

return 0;
}