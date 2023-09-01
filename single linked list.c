#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;
NODE *start = NULL,*ptr=NULL;
void display()
{
	if(start==NULL)
	{
		printf("\nthe linked list is empty");
	}
	else
	{
		printf("\nthe total linked list is = ");
		/*for(ptr=start;ptr!=NULL;ptr=ptr->next)
		{
			printf("\t %d",ptr->data);
		}*/
		ptr=start;
		while(ptr->next!=NULL)
		{
			printf("\t %d",ptr->data);
			ptr=ptr->next;
		}
		printf("\t %d",ptr->data);
	}
}
void insert_begin()
{
	int data;
	printf("enter the data = ");
	scanf("%d",&data);
	NODE *new_node;
	new_node=(NODE*)malloc(sizeof(NODE));
	new_node->data=data;
	if(start==NULL)
	{
		new_node->next=NULL;
	}
	else
	{
		new_node->next=start;
	}
	start=new_node;
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
	ptr=start;
	while(pos!=2)
	{
		ptr=ptr->next;
		pos--;
	}
	new_node->next=ptr->next;
	ptr->next=new_node;
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
void delete_begin()
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
	}
}
void delete_end()
{
	NODE *loc;
	if(start==NULL)
	{
		printf("\nlist is empty");
	}
	else if(start->next==NULL)
	{
		ptr=start;
		printf("\nthe deleted number is = %d",ptr->data);
		free(ptr);
		start=NULL;
	}
	else
	{
		ptr=start;
		while(ptr->next!=NULL)
		{
			loc=ptr;
			ptr=ptr->next;
		}
		loc->next=NULL;
		printf("\nthe deleted number is = %d",ptr->data);
		free(ptr);
	}
	
}
void delete_any_position()
{
	NODE *temp;
	int i,loc;
	printf("\nenter the position to delete = ");
	scanf("%d",&loc);
	if(start==NULL)
	{
		printf("\nthe list is empty");
	}
	else
	{
		ptr=start;
		for(i=1;i<loc;i++)
		{
			temp=ptr;
			ptr=ptr->next;
		}
		printf("the deleted number is = %d",ptr->data);
		temp->next=ptr->next;
		free(ptr);
	}
}
void reverse()
{
	NODE *prevnode,*currentnode,*nextnode;
	prevnode=NULL;
	currentnode=nextnode=start;
	while(nextnode!=NULL)
	{
		nextnode=nextnode->next;
		currentnode->next=prevnode;
		prevnode=currentnode;
		currentnode=nextnode;
	}
	start=prevnode;
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
		printf("\n 8.reversal");
		printf("\n********************");
		printf("\n enter your option = ");
		scanf("%d",&option);
		switch(option)
		{
			case 1: insert_begin();
					break;
			case 2: insert_any_position();
					break;
			case 3: insert_end();
					break;
			case 4: delete_begin();
					break;
			case 5: delete_any_position();
					break;
			case 6: delete_end();
					break;
			case 7: display();
					break;
			case 8: reverse();
					break;
			default: printf("enter a valid option");
		}
	}
	while(option!=9);
	getch();
}
