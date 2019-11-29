#include<stdio.h>
#define N 1000
int main()
{
	int n[N], k[N], i, t, f;
	int x, y;
	for (i=0; i>=0; i++)
	{
		scanf("%d %d", &n[i],&k[i]);
		if (n[i]==0&&k[i]==0)
			break;
	}
	t=i;
	for (i=0; i<t; i++)
	{
		f=0;
		for (x=0; x<=n[i]; x++)
		{
			y=n[i]-x;
			if (x*y==k[i])
				f=1;
		}
		if (f==1)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}