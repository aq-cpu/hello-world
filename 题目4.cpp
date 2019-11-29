#include<stdio.h>
#include<string.h>
#define N 1000
int main()
{
	int i, j, k, n;
	char c[N][3], b;
	scanf("%d",&n);
	for (i=0; i<n; i++)
		scanf("%s",c[i]);
	for (i=0; i<n; i++)
	{
		for (j=0; j<2; j++)
		{
			for (k=0; k<2-j; k++)
			{
				if (c[i][k]>c[i][k+1])
				{
					b=c[i][k];
					c[i][k]=c[i][k+1];
					c[i][k+1]=b;
				}
			}
		}
	}
	for (i=0; i<n; i++)
	{
		for (j=0; j<3; j++)
		{
			printf("%c ", c[i][j]);
		}
		printf("\n");
	}
	return 0;
}