#include<stdio.h>
#include<conio.h>
#define max 5
int deque[max];
int front=-1,rear=-1;
void insert_beg()
{
	int i,n;
	printf("\n enter your number = ");
	scanf("%d",&n);
	if(front==-1)
	{
		front=rear=0;
		deque[front]=n;
	}
	if(front==0&&rear!=max-1)
	{
		for(i=rear;i>=front;i--)
		{
			deque[i+1]=deque[i];
			deque[front]=n;
		}
	}
	else if(front>0)
	{
		front--;
		deque[front]=n;
	}
	else{
		printf("deque id full");
	}
}
