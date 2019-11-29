#include<stdio.h>
#define pi 3.1415926
#define N 1000
int main()
{
	int n, i;
	double m[N], s[N]={0};
	scanf("%d",&n);
	for (i=0; i<n; i++)
		scanf("%lf", &m[i]);
	for (i=0; i<n; i++)
	{
		s[i]=(m[i]*m[i]*pi)/3.0;
		printf("%.2lf\n", s[i]);
	}
	return 0;
}