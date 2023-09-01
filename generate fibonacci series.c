#include<stdio.h>
#include<conio.h>
void fseries(int p)
{
	int n;
	static int f0=0,f1=1;
	if(p==0)
	{
		printf("\n the series ends here");
	}
	else
	{
		n=f0+f1;
		f0=f1;
		f1=n;
		printf("\t%d",n);
		fseries(p-1);
	}
}
void main()
{
	int limit, f0=0,f1=1;
	printf("enter the limit of fibonacci series = ");
	scanf("%d",&limit);
	if(limit>2)
	{
		printf("%d\t%d",f0,f1);
		fseries(limit-2);
	}
	else if(limit==2)
	{
		printf("\t%d\t%d",f0,f1);
	}
	else if(limit==1)
	{
		printf("%d",f0);
	}
	else
	{
		printf("series not possible");
	}
	getch();
}
