#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;
int main()
{
	NODE*start,*first;
	start=(NODE*)malloc(sizeof(NODE));
	start->data=45;
	start->next=NULL;
	first=(NODE*)malloc(sizeof(NODE));
	first->data=45;
	first->next=NULL;
	
	
}
