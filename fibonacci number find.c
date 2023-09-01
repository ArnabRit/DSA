#include<stdio.h>
#include<conio.h>
int fibnum(int x)
{
	if(x==1||x==0)
	{
		return x;
	}
	else
	{
		return(fibnum(x-1)+fibnum(x-2));
	}
}
void main()
{
	int n;
	printf("enter the position you want from this series = ");
	scanf("%d",&n);
	printf("the fibonacci number is = %d",fibnum(n));
	getch();
}
