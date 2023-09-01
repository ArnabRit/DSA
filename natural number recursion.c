#include<stdio.h>
#include<conio.h>
int sum(int y)
{
	if(y==0)
	return 0;
	else
	return(y+sum(y-1));
}
void main()
{
	int y;
	printf("enter the maximum number = ");
	scanf("%d",&y);
	printf("the sum of number = %d",sum(y));
	getch();
}
