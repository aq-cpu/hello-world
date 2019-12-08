#include<stdio.h>
#define M 20
int main()
{
	int n[M], sum[M]={0}, s[M], a, i, j, k;
	scanf("%d",&a);
	for (i=0; i<a; i++)
		scanf("%d", &n[i]);
	for (i=0; i<a; i++)
	{	
		for (j=1; j<=n[i]; j++)
		{
			s[i]=1;
			for (k=1; k<=j; k++)
			{
				if (k%2==1)
					s[i]=s[i]*k;
			}
			sum[i]=sum[i]+s[i];
		}
	}
	for (i=0; i<a; i++)
		printf("%d\n", sum[i]);			
	return 0;
}