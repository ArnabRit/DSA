#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define p printf
#define s scanf
struct queue
{
	int no;
	struct queue *next;
};
struct queue *front,*rear,*ptr;
typedef struct queue node;
void insert()
{
	ptr=(node*)malloc(sizeof(node));
	p("\n enter the number = ");
	s("%d",ptr->no);
	ptr->next = NULL;
	if(front==NULL&&rear==NULL)
	{
		front = ptr;
		rear = ptr;
	}
	else
	{
		rear->next=ptr;
		rear=ptr;
	}
}
void delete_element()
{
	if(front==NULL)
	{
		p("\n the queue is empty");
	}
	else
	{
		ptr = front;
		if(front==rear)
		{
		//	free(ptr);
			front=NULL;
			rear=NULL;
		}
		else
		{
			front=front->next;
		//	free(ptr);
		}
	}
	p("\n the deleted element is = %d",ptr->no);
}
void display()
{
	if(front==NULL)
	{
		p("\n the queue is empty");
	}
	else
	{
		p("\n the elements of the queue is = ");
		for(ptr=front;ptr!=NULL;ptr=ptr->next)
		{
			p("\n %d",ptr->no);
		}
	}
	getch();
}
int main()
{
	int option;
	do
	{
		p("\n queue menue");
		p("\n 1. insert");
		p("\n 2. delete");
		p("\n 3. display");
		p("\n 4. exit");
		p("\n enter your option = ");
		s("%d",&option);
		switch(option)
		{
			case 1: insert();
					break;
			case 2: delete_element();
					break;
			case 3: display();
					break;
			case 4: exit;
			default: p("\n enter a valid option");
					break;
		}
	}
	while(option!=4);
	{
		getch();
	}
	getch();
}
