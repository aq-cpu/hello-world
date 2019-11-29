#include<stdio.h>
#define N 10000
int main()
{
	int k, n, x[N], y[N], i, j, t, l;
	scanf("%d", &n);
	for (i=0; i<n; i++)
	{
		scanf("%d", &x[i]);
		scanf("%d", &y[i]);
	}
	for (i=0; i<n; i++)
	{
		if (x[i]<y[i])
		{
			t=x[i];
			x[i]=y[i];
			y[i]=t;
		}
		l=x[i]*y[i];
		k=x[i]%y[i];
		if (k==0)
			printf("%d %d\n", x[i],y[i]);
		else
		{
			for (t=0; t>=0; t++)
			{
				j=y[i]%k;
				if (j==0)
					break;
				y[i]=k;
				k=j;
			}
			printf("%d %d\n", k, l/k);
		}
	}
	return 0;
}