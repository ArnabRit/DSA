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
		ptr=start;
		while(ptr->next!=start)
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
	NODE *new_node;
	printf("enter the number = ");
	scanf("%d",&data);
	new_node=(NODE*)malloc(sizeof(NODE));
	new_node->data=data;
	new_node->next=NULL;
	new_node->prev=NULL;
	if(start==NULL)
	{
		new_node->next=new_node;
		new_node->prev=new_node;
		start=new_node;
	}
	else
	{
		start->prev->next=new_node;
		new_node->prev=start->prev;
		start->prev=new_node;
		new_node->next=start;
		start=new_node;
	}
}
void insert_end()
{
	int data;
	NODE *new_node;
	printf("enter the number = ");
	scanf("%d",&data);
	new_node=(NODE*)malloc(sizeof(NODE));
	new_node->data=data;
	new_node->next=NULL;
	new_node->prev=NULL;
	if(start==NULL)
	{
		new_node->next=new_node;
		new_node->prev=new_node;
		start=new_node;
	}
	else
	{
		start->prev->next=new_node;
		new_node->prev=start->prev;
		new_node->next=start;
		start->prev=new_node;
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
	ptr->next->prev=new_node;
	new_node->prev=ptr;
	ptr->next=new_node;
}
void delete_beg()
{
	if(start==NULL)
	{
		printf("the linked list is empty");
	}
	else
	{
		ptr=start;
		start->prev->next=start->next;
		start->next->prev=start->prev;
		printf("the deleted element is = %d",ptr->data);
		start=start->next;
		free(ptr);
	}
}
void delete_end()
{
	if(start==NULL)
	{
		printf("the linked list is empty");
	}
	else
	{
		ptr=start->prev;
		ptr->prev->next=start;
		start->prev=ptr->prev;
		printf("the deleted element is = %d",ptr->data);
		free(ptr);
		ptr=NULL;
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
