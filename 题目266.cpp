#include<stdio.h>
#include<string.h>
#define M 40
#define N 10
int main()
{
	int n, i, j, l[N], m[N];
	char a[N][M], b[N][M];
	scanf("%d", &n);
	for (i=0; i<n; i++)
	{
		scanf("%s",a[i]);
		scanf("%s",b[i]);
		l[i]=strlen(a[i]);
		m[i]=strlen(b[i]);
	}
	for (i=0; i<n; i++)
	{
		for (j=m[i]-1; j>=0; j--)
		{
			if (b[i][j]>=97&&b[i][j]<=122)
				printf("%c",b[i][j]);
		}
		for (j=l[i]-1; j>=0; j--)
		{
			if (a[i][j]>=97&&a[i][j]<=122)
				printf("%c",a[i][j]);
		}
		printf("\n");	
	}
	return 0;
}
