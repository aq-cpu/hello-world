#include<stdio.h>
#define N 100
int main()
{
	int n[N], a[N][2], b[N], i, j, t[N], m, k;
	for (i=0; i<N; i++)
	{
		scanf("%d", &n[i]);
		if (n[i]==0)
			break;
		for (j=0; j<n[i]; j++)
		{
			scanf("%d %d",&a[j][0], &a[j][1]);
			b[j]=a[j][0]+a[j][1];
		}
		k=0;
		for (j=1; j<n[i]; j++)
		{
			if (b[k]<b[j])
				k=j;
		}
		t[i]=b[k];	
	}
	m=i;
	for (i=0; i<m; i++)
	{
		printf("%d\n",t[i]);
	}
	return 0;
}