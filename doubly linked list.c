#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
typedef struct node NODE;
NODE *start, *ptr;
void display()
{
	if(start==NULL)
	{
		printf("\nthe linked list is empty");
	}
	else
	{
		printf("\nthe total linked list is = ");
		ptr= start;
		while(ptr->next!=NULL)
		{
			printf("\t %d",ptr->data);
			ptr=ptr->next;
		}
		printf("\t%d\n",ptr->data);
	}
}
void insert_beg()
{
	int data;
	printf("enter the data = ");
	scanf("%d",&data);
	NODE *new_node;
	new_node=(NODE*)malloc(sizeof(NODE));
	new_node->data=data;
	new_node->next=NULL;
	new_node->prev=NULL;
	if(start==NULL)
	{
		start=new_node;
	}
	else
	{
		new_node->next=start;
		start->prev=new_node;
		start=new_node;
	}
}
void insert_end()
{
	int data;
	printf("enter the data = ");
	scanf("%d",&data);
	NODE *new_node;
	new_node=(NODE*)malloc(sizeof(NODE));
	new_node->data=data;
	new_node->next=NULL;
	new_node->prev=NULL;
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
		new_node->prev=ptr;
	}
}
void insert_any_position()
{
	int data,pos,i;
	printf("enter the data = ");
	scanf("%d",&data);
	printf("enter the position = ");
	scanf("%d",&pos);
	NODE*new_node;
	new_node=(NODE*)malloc(sizeof(NODE));
	new_node->data=data;
	new_node->next=NULL;
	new_node->prev=NULL;
	ptr=start;
	while(pos!=2)
	{
		ptr=ptr->next;
		pos--;
	}
	new_node->next=ptr->next;
	new_node->prev=ptr;
	ptr->next->prev=new_node;
	ptr->next=new_node;
}
void delete_beg()
{
	if(start==NULL)
	{
		printf("\nthe linked list is empty");
	}
	else
	{
		ptr=start;
		start=start->next;
		printf("\nthe deleted element = %d",ptr->data);
		free(ptr);
		start->prev=NULL;
	}
}
void delete_end()
{
	if(start==NULL)
	{
		printf("\nlist is empty");
	}
	else if(start->next==NULL)
	{
		start=NULL;
		printf("\nthe deleted number is = %d",ptr->data);
		free(start);
	}
	else
	{
		ptr=start;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->prev->next=NULL;
		ptr->prev=NULL;
		printf("\nthe deleted number is = %d",ptr->data);
		free(ptr);
	}
	
}
void delete_any_position()
{
	int pos,i;
	printf("\nenter the position = ");
	scanf("%d",&pos);
	if(start==NULL)
	{
		printf("\nthe list is empty");
	}
	else
	{
		ptr=start;
		for(i=1;i<pos;i++)
		{
			ptr=ptr->next;
		}
		ptr->prev->next=ptr->next;
		ptr->next->prev=ptr->prev;
		printf("\n the deleted element is= %d",ptr->data);
		free(ptr);
	}
}
void main()
{
	int option;
	do
	{
		printf("\n********menue*********");
		printf("\n 1.begin insert");
		printf("\n 2.any position insert");
		printf("\n 3.end insert");
		printf("\n 4.begin delete");
		printf("\n 5.any position delete");
		printf("\n 6.end delete");
		printf("\n 7.display");
		printf("\n********************");
		printf("\n enter your option = ");
		scanf("%d",&option);
		switch(option)
		{
			case 1: insert_beg();
					break;
			case 2: insert_any_position();
					break;
			case 3: insert_end();
					break;
			case 4: delete_beg();
					break;
			case 5: delete_any_position();
					break;
			case 6: delete_end();
					break;
			case 7: display();
					break;
			case 8: exit(0);
			default: printf("enter a valid option");
		}
	}
	while(option!=8);
	getch();
}
