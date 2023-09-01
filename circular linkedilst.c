#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;
NODE *start=NULL;
NODE *last=NULL;
NODE *ptr = NULL;
void display()
{
	ptr= start;
	if(ptr==NULL)
	{
		printf("\nthe linkedlist is empty");
	}
	else
	{

	printf("the circular linked list:");  
        do 
		{  
            printf("\t%d ", ptr->data);  
            ptr = ptr->next;  
        }
		while(ptr !=start);
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
	if(start==NULL)
	{
		new_node->next=new_node;
		start=new_node;
		last=new_node;
	}
	else
	{
		new_node->next=start;
		start=new_node;
		last->next=new_node;
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
	if(start=NULL)
	{
		new_node->next=new_node;
		start=last=new_node;
	}
	else
	{
		last->next=new_node;
		last=new_node;
		last->next=start;
	}
}
void main()
{
	insert_beg();
	insert_beg();
	insert_beg();
	insert_beg();
	insert_end();
	display();
	getch();
}
