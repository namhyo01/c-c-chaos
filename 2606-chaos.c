#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int a, b,i,j,k;
	int n[101][101] = { 0, };
	int co[101] = { 0, };
	int d = 0;
	scanf("%d", &a);
	scanf("%d", &b);
	for (i = 0; i < b; i++)
	{
		scanf("%d", &j);
		scanf("%d", &k);
		n[j][k] = 1;
		n[k][j] = 1;
		if (j == 1)
			co[k] = 1;
	}
    for(k=0;k<100;k++)
    {
        
    
	for (i = 2; i < 101; i++)
	{
		for (j = 2; j < 101; j++)
		{
			if (co[i] == 1)
			{
				if (n[i][j]==1)
					co[j] = 1;
			}
		}
	}
    }
	for (i = 2; i < 101; i++)
	{
		if (co[i] == 1)
			d++;
	}
	printf("%d", d);
	return 0;
}