#include<stdio.h>
#define N 10
int main()
{ 
	int  n, m[N], i;
	scanf("%d", &n);
	for (i=0; i<n; i++)
		scanf("%d",&m[i]);
	for (i=0; i<n; i++)
	{
		if (m[i]>=90&&m[i]<=100)
			printf("%c\n", 65);
		else if (m[i]>=80&&m[i]<=89)
			printf("%c\n", 66);
		else if (m[i]>=70&&m[i]<=79)
			printf("%c\n", 67);
		else if (m[i]>=60&&m[i]<=69)
			printf("%c\n", 68);
		else
			printf("%c\n", 69);
	}
	return 0;
}