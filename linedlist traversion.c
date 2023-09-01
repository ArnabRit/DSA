#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;
void main()
{
	NODE *start, *current;
	start=(NODE*)malloc(sizeof(NODE));
	start->data=34;
	start->next=NULL;
	current=(NODE*)malloc(sizeof(NODE));
	current->data=45;
	current->next=NULL;
	start->next=current;
	current=(NODE*)malloc(sizeof(NODE));
	current->data=100;
	current->next=NULL;
	current->next->next=current;
	count_of_nodes(start);
	getch();
}
void count_of_nodes(NODE *start)
{
	NODE *ptr=NULL;
	int count=0;
	if(start==NULL)
	{
		printf("the linkedlist id empty ");
	}
	ptr=start;
	while(ptr!=NULL)
	{
		count++;
		ptr=ptr->next;
	}
	printf("the total nmber of nodes is  = %d",count);
}
