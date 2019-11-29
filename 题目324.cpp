#include<stdio.h>
#define N 1000
int main()
{
	int n, m[N], s[N], i, j;
	scanf("%d",&n);
	for (i=0; i<n; i++)
		scanf("%d", &m[i]);
	for (i=0; i<n; i++)
	{
		s[i]=1;
		for (j=m[i]; j>0; j--)
			s[i]=(s[i]+1)*2;
		printf("%d\n", s[i]);
	}
	return 0;
}