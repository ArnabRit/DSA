#include<stdio.h>
#include<conio.h>
int power(int p, int n)
{
	static int a=1;
	if(n==0)
	{
		return 1;
	}
	else
	{
		a=a*p;
		power(p,n-1);
	}
	return a;
}
void main()
{
	int a,b;
	printf("enter the number = ");
	scanf("%d",&a);
	printf("enter the power value = ");
	scanf("%d",&b);
	printf("the result is = %d",power(a,b));
	getch();
}
