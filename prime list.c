#include<stdio.h>
#include<conio.h>
void primelist(int p)
{
	static int n=3;
	int i,flag = 0;
	if(p==0)
	{
		printf("\n series ends here");
	}
	else
	{
		for(i=2;i<n;i++)
		{
			if(n%i==0)
			{
				flag=0;
				break;
			}
			else
			{
				flag = 1;
			}
		}
		if(flag)
		{
			printf("\n %d",n);
			n++;
			primelist(p-1);
		}
		else
		{
			n++;
			primelist(p);
		}
	}
}
void main()
{
	int limit;
	printf(" enter the number = ");
	scanf("%d",&limit);
	printf("\n 2");
	primelist(limit-1);
	getch();
}
