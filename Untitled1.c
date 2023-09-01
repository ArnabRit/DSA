#include<stdio.h>
#include<conio.h>
#define max 10 
int st[max], top=-1;
void push(int st[],int val);
int pop (int st[]);
int peep (int st[]);
void display (int st[]);
main()
{
	int val, option ;
	do
	{
		printf("\n ****** main manue******");
		printf("\n 1. push");
		printf("\n 2. pop");
		printf("\n 3. peep");
		printf("\n*****************");
		printf("\n\n enter your option = ");
		scanf("%d",&option);
		switch(option)
		{
			case 1:
				printf("\n enter the number to be pushed on the stack :");
				scanf("%d",&val);
				push(st,val);
				break;
			case 2:
				val= pop(st);
				printf("\n the value deleted from the stack is : %d",val);
				break;
			case 3:
				val=peep(st);
				printf("\n the value stored at the top of the stack is : %d", val);
				break;
		}
	}while (option!=5);
	getch();
	return 0;
}
void push(int st[],int val)
{
	if(top==max-1)
	{
		printf("\n stack over flow");
	}else{
		top++;
		st[top]=val;
	}
}
int pop (int st[])
{
	int val;
	if(top==-1){
		printf("\n stack underflow");
		return -1;
	}
	else{
		val=st[top];
		top--;
		return val;
	}
}
int peep(int st[])
{
	if(top == -1){
		printf("\n stack is empty");
		return -1;
	}
	else{
		return (st[top]);
	}
}
