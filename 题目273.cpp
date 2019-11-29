#include<stdio.h>
#include<string.h>
#define M 200
#define N 1000
int main()
{
	int n, i, j, l[N]={0}, m[N];
	char a[N][M];
	scanf("%d", &n);
	for (i=0; i<n; i++)
	{
		scanf("%s",a[i]);
		m[i]=strlen(a[i]);
	}
		
	for	(i=0; i<n; i++)
	{
		for (j=0; j<m[i]; j++)
		if (a[i][j]>=97&&a[i][j]<=122)
			l[i]++;
	}
	for (i=0; i<n; i++)
	{
		l[i]=l[i]%26;
		if (l[i]==0)
			l[i]=122;
		else
			l[i]+=96;
		printf("%c\n", l[i]);
	}
	return 0;
}
