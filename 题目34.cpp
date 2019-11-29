#include<stdio.h>
int main()
{
	int a, b, c, n, f;
	scanf("%d %d %d", &a,&b,&c);
	f=0; 
	for (n=10; n<=100; n++)
	{
		if (n%3==a&&n%5==b&&n%7==c)
		{
			printf("%d\n",n);
			f=1;
			break;
		}
	}
	if (f==0)
		printf("No answer\n");
	return 0;
}