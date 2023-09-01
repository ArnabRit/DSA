#include<stdio.h>
#include<conio.h>
#define max 5
int queue[max];
int front=-1,rear=-1;
void insert_element()
{
	int data;
	printf("inser an element = ");
	scanf("%d",&data);
	if(front==0&&rear==max-1)
	{
		printf("\noverflow");
	}
	else if(front==-1&&rear==-1)
	{
		front=rear=0;
		queue[rear]=data;
	}
	else if(rear==max-1&&front!=0)
	{
		rear=0;
		queue[rear]=data;
	}
	else
	{
		rear++;
		queue[rear]=data;
	}
}
void delete_element()
{
	int val;
	if(front==-1&&rear==-1)
	{
		printf("underflow");
	}
	val=queue[front];
	if(front==rear)
	{
		front=rear=-1;
	}
	else if(front==max-1)
	{
		front=0;
	}
	else
	{
		front++;
	}
	printf("\nthe deleted element is = %d",val);
}
void display()
{
	int i;
	if(front==-1&&rear==-1)
	{
		printf("\n the queue is empty");
	}
	else if(front<rear)
	{
		for(i=front;i<=rear;i++)
		{
			printf("\t%d",queue[i]);
		}
	}
	else
	{
		for(i=front;i<max;i++)
		{
			printf("\t%d",queue[i]);
		}
		for(i=0;i<=rear;i++)
		{
			printf("\t%d",queue[i]);
		}
	}
}
void main()
{
	int option;
	do
	{
		printf("\n*****main menu****");
		printf("\n1. for insert");
		printf("\n2. for delete");
		printf("\n3. for display");
		printf("\n4. exit");
		printf("\n********************");
		printf("\n enter your option = ");
		scanf("%d",&option);
		switch(option)
		{
			case 1: insert_element();
					break;
			case 2: delete_element();
					break;
			case 3: display();
					break;
			case 4: getch();
			default : printf("\nenter a valid option");
					  break;
		}
	}
	while(option!=4);
	getch();	
}
