#include<stdio.h>
#define M 10
int main()
{
	int m[M], n[M], a, i, j, k, f;
	scanf("%d",&a);
	for (i=0; i<a; i++)
	{
		scanf("%d %d", &n[i], &m[i]);
	}
	for (i=0; i<a; i++)
	{	
		f=0;
		for (j=0; j<=n[i]; j++)
		{
			k=n[i]-j;
			if (2*j+4*k==m[i])
			{
				f=1;
				printf("%d %d\n", j, k);
			}
		}
		if (f==0)	
			printf("No answer\n");
	}
	return 0;
}