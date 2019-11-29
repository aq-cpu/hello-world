#include<stdio.h>
#include<string.h>
#define N 10000
int main()
{
	int m, i, j;
	char a[N];
	gets(a);
	m=strlen(a);
	j=1;
	for (i=0; i<m; i++)
	{
		if (a[i]==32)
			j++;
	}
	printf("%d\n",j);
	return 0;
}
