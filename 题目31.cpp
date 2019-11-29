#include<stdio.h>
#define N 1000
int main()
{
	int a[N], n, i, k, max, min;
	scanf("%d", &n);
	for (i=0; i<n; i++)
		scanf("%d", &a[i]);
	k=0;
	for (i=1; i<n; i++)
	{	
		if (a[k]<a[i])
			k=i;
	}
	max=a[k];
	k=0;
	for (i=1; i<n; i++)
	{	
		if (a[k]>a[i])
			k=i;
	}
	min=a[k];
	printf("%d %d\n", min, max);
	return 0;
}