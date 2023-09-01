#include<stdio.h>
#include<conio.h>
#define max 5
int st[max];
int top = -1;
void push()
{
	int a;
	printf("\n enetr the value : ");
	scanf("%d",&a);
	if(top==max-1){
		printf("overflow");
	}
	else{
		top++;
		st[top]=a;
	}
}
int pop()
{
	int val;
	if (top==-1){
		printf("\nunderflow");
		return 0;
	}
	else{
		val=st[top];
		top--;
		return val;
	}
}
int peep(){
	if (top==-1){
		printf("\n stack is empty");
	}
	else{
		return (st[top]);
	}
}
void display(){
	int i;
	if (top==-1){
		printf("\nstack is empty");
	}
	else{
		printf("\n the total stack is = ");
		for(i=top;i>-1;i--)
		printf("\n %d",st[i]);
	}
}
int main(){
	int option,val;
	do {
	printf("\n*****************************");
	printf("\n 1. for push operation ");
	printf("\n 2. for pop operation ");
	printf("\n 3. for peep operation ");
	printf("\n 4. for display operation");
	printf("\n 5. for exit");
	printf("\n****************************");
	printf("\n enter your option = ");
	scanf("%d",&option);
	switch(option){
		case 1:
			push();
			break;
		case 2:
			val = pop(st);
			printf("\n the poped value is = %d",val);
			break;
		case 3:
			val = peep(st);
			printf("\n top value of the stack is = %d",val);
			break;
		case 4:
			display(st);
			break;		
		default:
			printf("\n enter a valid option");	
	}
	}
	while(option!=5);{
		return 0;
	}
	getch();
}
