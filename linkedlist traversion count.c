#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;
int count_of_node(NODE *start)
{
	NODE *ptr=NULL;
	int count=0;
	if(start==NULL)
	{ 
		printf("the linkedlist is empty ");
	}
	for(ptr=start;ptr!=NULL;ptr=ptr->next)
	{
		count++;
	}
	printf("the total number of nodes is  = %d\n",count);
}
void print(NODE*start)
{
	NODE *ptr=NULL;
	if(start==NULL)
	{
		printf("linkedlist is empty");
	}
	printf("\nthe numbers in the lilnked list is =");
	for(ptr=start;ptr!=NULL;ptr=ptr->next)
	{
		printf("\t %d",ptr->data);
	}
}
void end(NODE*start,int data)
{
	NODE*ptr,*new_node;
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
int main()
{
	NODE *start;
	start=(NODE*)malloc(sizeof(NODE));
	start->data=34;
	start->next=NULL;
	/*current=(NODE*)malloc(sizeof(NODE));
	current->data=45;
	current->next=NULL;
	start->next=current;
	current=(NODE*)malloc(sizeof(NODE));
	current->data=100;
	current->next=NULL;
	start->next->next=current;
	end(start,98);
	count_of_node(start);
	print(start);
	getch();*/
	end(start,23);
	end(start,67);
	end(start,300);
	end(start,123);
	end(start,654);
	count_of_node(start);
	print(start);
	getch();
}

