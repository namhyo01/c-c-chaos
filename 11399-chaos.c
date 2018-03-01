#include <stdio.h>
int main()
{
	int a, i, temp,score = 0,min;
	int atm[1000] = { 0, };
	scanf("%d", &a);
	for (i = 0; i < a; i++)
	{
		scanf("%d", &atm[i]);
	}
	for (i = 0; i < a-1; i++)
	{
			min = i;
			for (int j = i + 1; j<a; j++)
			{
				if (atm[j]<atm[min])
					min = j;
			}
			temp = atm[i];
			atm[i] = atm[min];
			atm[min] = temp;
			
		
	}
	for (i = 0; i < a; i++)
	{
		for (int j = i; j >= 0; j--)
		{
			score += atm[j];
		}
	}
	printf("%d", score);
	return 0;
}