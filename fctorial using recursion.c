#include<stdio.h>
#include<conio.h>
int fact(int x)
{
	if(x==1)
	{
		return 1;
	}
	else
	{
		return(x*fact(x-1));
	}
}
void main()
{
	int n;
	printf("enter the numer = ");
	scanf("%d",&n);
	printf("the factorial of this number is = %d",fact(n));
	getch();
}
