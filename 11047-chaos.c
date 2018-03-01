#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int N, K,c=0;
	int A[10];
	int a;
	scanf("%d %d", &N, &K);
	for (int i = 0; i < N; i++){
		scanf("%d", &A[i]);
	}
	a = N - 1;
	while (1)
	{

		if (K < A[a]){
			a--;
			continue;
		}
			else if (K == 0){
				printf("%d", c);
				break;
			}
			else
			{
				c++;
				K = K - A[a];
			}

		}
	return 0;
}
	
