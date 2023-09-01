#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;
NODE *start=NULL,*ptr=NULL;
void count(NODE *start)
{
	int count = 0;
	if(start==NULL)
	{
		printf("the linked list is empty");
	}
	else
	{
		for(ptr=start;ptr!=NULL;ptr=ptr->next)
		{
			count++;
		}
		printf("\nthe total number of nodes is = %d",count);
	}
}
void print(NODE *start)
{
	if(start==NULL)
	{
		printf("\nthe linked list is empty");
	}
	else
	{
		printf("\nthe total elements of linked list is = ");
		for(ptr=start;ptr!=NULL;ptr=ptr->next)
		{
			printf("\t %d",ptr->data);
		}
	}
}
void end(int data)
{
	NODE *new_node;
	new_node=(NODE*)malloc(sizeof(NODE));
	new_node->data=data;
	new_node->next=NULL;
	if(start==NULL)
	{
		start=new_node;
	}
	else
	{
		ptr=start;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=new_node;
	}
}
void main()
{
	//start=(NODE*)malloc(sizeof(NODE));
	//start->data=67;
	//start->next=NULL;
	end(23);
	end(67);
	end(300);
	end(123);
	end(654);
	count(start);
	print(start);
	getch();
}
