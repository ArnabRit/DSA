#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define p printf
#define s scanf
#define ff fflush(stdin)
struct stack
{
	int no;
	struct stack *next;
};
typedef struct stack st;
struct stack *top,*ptr;
void push()
{
	int n;
	ptr=(st*) malloc(sizeof(st));
	p("\n enter the number = ");
	s("%d",&n);
	ptr->no=n;
	ptr->next=top;
	top=ptr;
	getch();
}
void pop()
{
	if(top==NULL)
	{
		p("\n stack underflow");
	}
	else
	{
		ptr=top;
		top=ptr->next;
		p("\n the poped item is = %d",ptr->no);
		free(ptr);
	}
	getch();
}
void display()
{
	if(top==NULL)
	{
		p("\n the stack is empty");
	}
	else
	{
		p("\n the elements in the stack is = ");
		for(ptr=top;ptr!=NULL;ptr=ptr->next)
		p("\n %d",ptr->no);
	}
	getch();
}
void main()
{
	int option;
	do
	{
		p("\n stack manue");
		p("\n 1. push");
		p("\n 2. pop");
		p("\n 3. display");
		p("\n 4. exit");
		p("\n enter your option= ");
		s("%d",&option);
		ff;
		switch(option)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
			default:
				p("\n enter a valid option");
		}
	}
	while(option!=4);
	{
		getch();
	}
	getch();
}
