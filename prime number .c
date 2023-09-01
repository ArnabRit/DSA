#include<stdio.h>
#include<conio.h>
int prime(int p)
{
	static int d=2,flag=0;
	if(d==p)
	{
		return 0;
	}
	else
	{
		if(p%d==0)
		{
			flag = 0;
			d++;
		}
		else
		{
			d++;
			flag=1;
			prime(p);
		}
	}
	return flag;
}
void main()
{
	int n,f=0;
	printf("enter the number = ");
	scanf("%d",&n);
	if(n==2)
	{
		printf("the number is prime");
	}
	else if (n<2)
	{
		printf("the smallest prime number is 2 ");
	}
	else
	{
		f=prime(n);
		if(f)
		{
			printf("the number is prime");
		}
		else
		{
			printf("the number is not prime");
		}
	}
	getch();
}
