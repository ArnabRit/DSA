#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct stack
{
	int data;
	struct stack *next;
};
typedef struct stack STACK;
STACK *top,*ptr,*start;
void push()
{
	int data;
	STACK *new_node;
	printf("enter the number = ");
	scanf("%d",&data);
	new_node=(STACK*)malloc(sizeof(STACK));
	new_node->data=data;
	new_node->next=NULL;
	if(start==NULL)
	{
		start=new_node;
	}
	else
	{
		top=start;
		while(top->next!=NULL)
		{
			top=top->next;
		}
		top->next=new_node;
	}
}
void pop()
{
	if(start==NULL)
	{
		printf("the stach is empty");
	}
	else
	{
		top=start;
		while(top->next!=NULL)
		{
			ptr=top;
			top=top->next;
		}
		ptr->next=NULL;
		printf("the deleted element is = %d",top->data);
		free(top);
	}
}
void display()
{
	if(start==NULL)
	{
		printf("\nthe stack is empty");
	}
	else
	{
		printf("the stack is = ");
		top=start;
		while(top->next!=NULL)
		{
			printf("\t%d",top->data);
			top=top->next;
		}
		printf("\t %d",top->data);
	}
}
void main()
{
	int option;
	do
	{
		printf("\n queue menue");
		printf("\n 1. push");
		printf("\n 2. pop");
		printf("\n 3. display");
		printf("\n 4. exit");
		printf("\n enter your option = ");
		scanf("%d",&option);
		switch(option)
		{
			case 1: push();
					break;
			case 2: pop();
					break;
			case 3: display();
					break;
			case 4: exit(0);
			default: printf("\n enter a valid option");
					break;
		}
	}
	while(option!=4);
	{
		getch();
	}
	getch();
}
