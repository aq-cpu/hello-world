#include<stdio.h>
#include<string.h>
#define N 100
#define M 10
int main()
{
	int n[M], m, i, j;
	char a[M][N];
	scanf("%d",&m);
	for (i=0; i<m; i++)
	{
		scanf("%s", a[i]);
		n[i]=strlen(a[i]);
	}
	for (i=0; i<m; i++)
	{
		for (j=0; j<n[i]; j++)
		{
			if (a[i][j]>=97&&a[i][j]<=122)
				a[i][j]=a[i][j]-32;
			else 
				a[i][j]=a[i][j]+32;
		}
	}		
	for (i=0; i<m; i++)
		printf("%s\n", a[i]);
	return 0;
}