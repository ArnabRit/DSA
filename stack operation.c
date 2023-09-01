#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define P printf
#define S scanf
#define FF fflush(stdin)
struct stack
{
	int no;
	struct stack *next;
};
struct stack *top,*ptr;
void main()
{
	int option;
	while(1)
	{
		clrscr();
		P("\n\t\t stack manue");
		P("\n 1. push a node in a stack");
		P("\n 2. pop a node from a stack");
		P("\n 3. display stack");
		P("\n 4. Exit");
		P("\n Enter your option = ");
		S("%d",&option);
		FF;
		switch(option)
		{
			case 1:push();
				break;
			case 2:pop();
				break;
			case 3:display();
				break;
			case 4:getch();
		}
	}
	getch();
}
int empty()
{
	if(top==NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void push()
{
	struct stack*nw;
	nw=(struct stack*)malloc(sizeof(struct stack));
	P("\n enter the no");
	S("%d",&nw->no);
	FF;
	nw->next=top;
	top=nw;
	P("\n one node pushed.....");
	getch();
}
void pop()
{
	if(empty())
	{
		P("\n the stack is empty");
		getch();
	}
	return 0;
	ptr=top;
	top=top->next;
	free(ptr);
	P("\n one node poped........");
	getch();
}
void display()
{
	if(empty())
	{
		P("\n the stack is empty");
		getch();
	}
	else
	{
		P("\n the elements in the stack is ");
		for(ptr=top;ptr!='\0';ptr=ptr->next)
		{
			P("\n %d",ptr->no);
		}
	}
	getch();
}
