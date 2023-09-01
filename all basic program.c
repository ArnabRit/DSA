// function
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("enter the number \n");
	scanf("%d",&a);
	b=(a<0)?-1:((a==0)?0:1);
	printf("the number is = %d",b);
	getch();
}
