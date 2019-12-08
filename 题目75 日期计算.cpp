#include<stdio.h>
#define N 100
int main()
{ 
  int  n, y[N], m[N], d[N], i;
  scanf("%d", &n);
  for (i=0; i<n; i++)
	scanf("%d %d %d",&y[i],&m[i],&d[i]);
  for (i=0; i<n; i++)
  {
	if ((y[i]%4==0&&y[i]%100!=0)||y[i]%400==0)
	{
	  switch (m[i])
	  {
	   case 1:printf("%d\n",d[i]);break;
       case 2:printf("%d\n",d[i]+31);break;
       case 3:printf("%d\n",d[i]+60);break;
       case 4:printf("%d\n",d[i]+91);break;
       case 5:printf("%d\n",d[i]+121);break;
       case 6:printf("%d\n",d[i]+152);break;
       case 7:printf("%d\n",d[i]+182);break;
       case 8:printf("%d\n",d[i]+213);break;
       case 9:printf("%d\n",d[i]+244);break;
       case 10:printf("%d\n",d[i]+274);break;
	   case 11:printf("%d\n",d[i]+305);break;
       case 12:printf("%d\n",d[i]+335);break;
	  }
	}
	else
	{
      switch (m[i])
	  {
	   case 1:printf("%d\n",d[i]);break;
       case 2:printf("%d\n",d[i]+31);break;
       case 3:printf("%d\n",d[i]+59);break;
       case 4:printf("%d\n",d[i]+90);break;
       case 5:printf("%d\n",d[i]+120);break;
       case 6:printf("%d\n",d[i]+151);break;
       case 7:printf("%d\n",d[i]+181);break;
       case 8:printf("%d\n",d[i]+212);break;
       case 9:printf("%d\n",d[i]+243);break;
       case 10:printf("%d\n",d[i]+273);break;
	   case 11:printf("%d\n",d[i]+304);break;
       case 12:printf("%d\n",d[i]+334);break;
	  }
	}
  }
  return 0;
}