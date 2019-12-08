#include<stdio.h>
#include<math.h>
#define N 1000
int main()
{
	int m[N], n[N], i, k, j, a[N][3], b[N][3], c[N]={0};
	for (i=0; i>=0; i++)
	{
		scanf("%d %d", &m[i], &n[i]);
		k=i;
		if (m[i]==0&&n[i]==0)
			break;	
	}	
	for (i=0; i<k; i++)
	{
		if (m[i]>100&&m[i]<1000)
		{
			a[i][2]=m[i];
			a[i][1]=m[i]-(m[i]/100)*100;
			a[i][0]=m[i]%10;
		}
		if (n[i]>100&&n[i]<1000)
		{
			b[i][2]=n[i];
			b[i][1]=n[i]-(n[i]/100)*100;
			b[i][0]=n[i]%10;
		}
	}
	
	for (i=0; i<k; i++)
	{
		for (j=0; j<3; j++)
		{
			if (a[i][j]+b[i][j]>=pow(10,j+1))
				c[i]++;
		}
	}
	for (i=0; i<k; i++)
		printf("%d\n",c[i]);
	return 0;
}