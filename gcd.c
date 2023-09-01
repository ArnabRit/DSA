#include<stdio.h>
#include<conio.h>
int gcd(int x, int y)
{
	if(y<=x && x%y==0)
	{
		return y;
	}
	else
	{
		if(x<y)
		{
			return(gcd(y,x));
		}
		else
		{
			return(gcd(y,x%y));
		}
	}
}
void main()
{
	int a,b;
	printf("enter the numbers = \n");
	scanf("%d\t%d",&a,&b);
	printf("the gcd value is = %d",gcd(a,b));
	getch();
}
