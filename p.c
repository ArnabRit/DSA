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
	if(rear==max-1)
	{
		printf("\noverflow");
	}
	else if(front==-1&&rear==-1)
	{
		front=rear=0;
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
	if(front=rear==-1||front>rear)
	{
		printf("\nunderflow");
	}
	else
	{
		val=queue[front];
		printf("\nthe deleted element is = %d",val);
		front++;
	}
}
void dispaly()
{
	int i;
	if(front=rear==-1||front>rear)
	{
		printf("\nqueue is empty");
	}
	else
	{
		printf("\n the total queue is = ");
		for(i=front;i<=rear;i++)
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
			case 1: insert_elemet();
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
