#include<stdio.h>
#include<conio.h>
void multi(int n)
{
	if(n<10000)
	{
		multi(n*10);
	}
	printf("\n %d",n);
}
void main()
{
	multi(10);
	getch();
}
