#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct queue
{
	int data;
	struct queue *next;
};
typedef struct queue QUEUE;
QUEUE *front,*rear,*start;
void insert()
{
	int data;
	QUEUE *new_node;
	printf("enter the number = ");
	scanf("%d",&data);
	new_node=(QUEUE*)malloc(sizeof(QUEUE));
	new_node->data=data;
	new_node->next=NULL;
	if(start==NULL)
	{
		start=new_node;
	}
	else
	{
		front=start;
		while(front->next!=NULL)
		{
			front=front->next;
		}
		front->next=new_node;
	}
}
void delete_()
{
	if(start==NULL)
	{
		printf("\nthe queue is empty");
	}
	else
	{
		rear=start;
		start=start->next;
		printf("the deleted element is = %d",rear->data);
		free(rear);
	}
}
void display()
{
	if(start==NULL)
	{
		printf("\nthe queue is empty");
	}
	else
	{
		printf("the queue is = ");
		front=start;
		while(front->next!=NULL)
		{
			printf("\t%d",front->data);
			front=front->next;
		}
		printf("\t %d",front->data);
	}
}
void main()
{
	int option;
	do
	{
		printf("\n queue menue");
		printf("\n 1. insert");
		printf("\n 2. delete");
		printf("\n 3. display");
		printf("\n 4. exit");
		printf("\n enter your option = ");
		scanf("%d",&option);
		switch(option)
		{
			case 1: insert();
					break;
			case 2: delete_();
					break;
			case 3: display();
					break;
			case 4: exit(0);
			default: printf("\n enter a valid option");
					break;
		}
	}
	while(option!=4);
	{
		getch();
	}
	getch();
}
