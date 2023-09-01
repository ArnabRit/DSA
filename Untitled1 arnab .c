#include<stdio.h>
#include<conio.h>
#define max 10
int st[max];
int top=-1;
void push(int st[],int val){
	if (top == max-1){
		printf("stack overflow");
	}else{
		top ++;
		st[top]=val;
	}
}
int pop(int st[]){
	int val;
	if (top==-1){
		printf("stack underflow");
	}else{
		val=st[top];
		top--;
		return val;
	}
}
int peep(int st[]){
	if( top == -1){
		printf("stack is empty");
	}else{
		return (st[top]);
	}
}
void display(int st[]){
	int i;
	if(top==-1){
		printf("no element to display");
	}else{
		for(i=top;i>=0;i--){
			printf("the elements are = \n%d",st[i]);
		}
	}
}
int main (){
	int val,option;
	do {
		printf("\n ******* main manue*******");
		printf("\n 1. push");
		printf("\n 2. pop");
		printf("\n 3. peep");
		printf("\n 4. display");
		printf("************************");
		printf("\n enter your option :");
		scanf("%d",&option);
		switch(option){
			case 1:
				printf("\n eneter the number which you want to add =");
				scanf("%d",&val);
				push(st,val);
				break;
			case 2:
				val = pop(st);
				printf("\n the value deleted from the stack is = %d",val);
				break;
			case 3:
				val= peep(st);
				printf("\n the top element is = =%d",val);
				break;
			case 4:
				display(st);
				return 0;
				break;
			}
		}
		while (option!=5);
		getch();			
	}
