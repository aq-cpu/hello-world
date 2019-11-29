#include<stdio.h>
#define N 1000
int main()
{
	int a[N], i, k, ge, shi, bai;
	for (i=0; i<N; i++)
	{
		scanf("%d", &a[i]);
		k=i;
		if (a[i]==0)
			break;	
	}
	for (i=0; i<k; i++)
	{
		if (a[i]>=100&&a[i]<=1000)
		{
			bai=a[i]/100;
			shi=(a[i]%100)/10;
			ge=a[i]-shi*10-bai*100;
			if (a[i]==ge*ge*ge+shi*shi*shi+bai*bai*bai)
				printf("Yes\n");
			else
				printf("No\n");
		}
	}
	return 0;
}