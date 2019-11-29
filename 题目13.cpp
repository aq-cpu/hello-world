#include<stdio.h>
#define N 20
int fib(int n)
{
	int a[N], i;
	a[1]=1;
	a[2]=1;
	a[3]=2;
	for (i=4; i<=n; i++)
		a[i]=a[i-1]+a[i-2];
	return(a[n]);
}
void main()
{
	int m, n[N], i;
	scanf("%d", &m);
	for (i=0; i<m; i++)
		scanf("%d", &n[i]);
	for (i=0; i<m; i++)
		printf("%d\n", fib(n[i]));
}
