#include<stdio.h>
#define N 30
#define M 10000
int main()
{
	int k, n[N], x[M], y[M], i, j, t, f;
	scanf("%d", &k);
	for (i=0; i<k; i++)
		scanf("%d", &n[i]);
	for (i=0; i<k; i++)
	{
		t=0; f=0;
		for (j=1; j<=n[i]; j++)
		{
			if (j%2==1)
			{
				x[t]=j;
				t++;
			}
			else 
			{
				y[f]=j;
				f++;
			}
		}
		for (j=0; j<t; j++)
			printf("%d ", x[j]);
		printf("\n");
		for (j=0; j<f; j++)
			printf("%d ", y[j]);
		printf("\n");
		printf("\n");
	}
	return 0;
}