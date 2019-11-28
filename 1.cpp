#include<stdio.h>
#include<string.h>
#define N 10
#define M 20
int main()
{
	int n, i, k, l, j;
	i=0;
	char a[M][N], c[N];
	char d[N]="#", e[N];
	scanf("%s",a[i]);
	e[N]=a[i];
	while (strcmp(e,d))
	{
		scanf("%s",a[i]);
		e[N]=a[i];
		i++;
	}
	l=i;
	for (i=0; i<=l-1; i++)
	{
		k=i;
		for (j=i+1; j<=l; j++)
		if (strlen(a[k])>strlen(a[j]))
			k=j;
		if (k!=0)
		{
			c[N]=a[i];
			a[i]=a[k];
			a[k]=c[N];
		}
	}
	for (i=0; i<=l; i++)
		printf("%s ", a[i]);
	return 0;
}
