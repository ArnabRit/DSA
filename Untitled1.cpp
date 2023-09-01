#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;
NODE *start = NULL,*ptr;
void display(NODE*start)
{
	if(start==NULL)
	{
		printf("\nthe linked list is empty");
	}
	else
	{
		printf("\nthe total linked list is = ");
		for(ptr=start;ptr!=NULL;ptr=ptr->next)
		{
			printf("\t %d",ptr->data);
		}
	}
}
void begin()
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
void any_position()
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
void end()
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
/*void delete_end()
{
	NODE *loc;
	if(start==NULL)
	{
		printf("\nlist is empty");
	}
	else if(start->next==NULL)
	{
		ptr=start;
		start=NULL;
		printf("\nthe deleted element is = %d",ptr->data);
		free(ptr);
	}
	else
	{
		loc=start;
		ptr=start->next;
		while(ptr->next=NULL)
		{
			loc=ptr;
			ptr=ptr->next;
		}
		loc->next=NULL;
		printf("\nthe deleted element is = %d",ptr->data);
		free(ptr);
	}
}*/
int main()
{
	int i;
	for(i=0;i<=0;i++)
	{
		begin();
	}
	for(i=0;i<=2;i++)
	{
		end();
	}
	any_position();
	delete_begin();
	//delete_end();
	display(start);
	getch();
	/*int option;
	do
	{
		printf("\n********menue*********");
		printf("\n 1.begin insert");
		printf("\n 2.any position insert");
		printf("\n 3.end insert");
		printf("\n 4.display");
		printf("\n********************");
		printf("\n enter your option = ");
		scanf("%d",&option);
		switch(option)
		{
			case 1: begin();
					break;
			case 2: any_position();
					break;
			case 3: end();
					break;
			case 4: display(start);
					break;
			case 5: exit(0);
			default: printf("enter a valid option");
		}
	}
	while(option!=5);
	{
		getch();
	}
	getch();*/
}
