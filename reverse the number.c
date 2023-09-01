#include<stdio.h>
#include<conio.h>
int reverse(int p)
{
	int a;
	static int b = 0;
	if(p==0)
	{
		return p;
	}
	else
	{
		a = p%10;
		b=b*10+a;
		reverse(p/10);
	}
	return b;
}
void main()
{
	int num;
	printf("enter the number = ");
	scanf("%d",&num);
	printf("the reverse of this number is = %d",reverse(num));
	getch();
}
