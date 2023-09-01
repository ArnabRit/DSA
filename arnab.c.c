#include<stdio.h>
#include<conio.h>
#define max 5
int stack[max];
int top=-1;
void push()
{	int n;
	printf("enter the number = ");
	scanf("%d",&n);
	if(top==max-1){
		printf("stack overflow");
	}
	else{
		top++;
		stack[top]=n;
	}

}void pop(){
	int a;
	if(top==-1){
		printf("\n stack underflow");
	}else{
		a=stack[top];
		printf("\n the deleted value is= %d",a);
		top--;
	}
}void peep(){
	if (top==-1){
		printf("\n the stack is empty");
	}
	else{
		printf("\n the top value is = %d",stack[top]);
	}
}
void display (){
	int i;
	printf("\nthe value in the stack is= ");
	for(i=top;i>=0;i--){
		printf("\n %d",stack[i]);
	}
}
void main(){
	int a;
	for(a=0;a<5;a++){
		push();
	}
/*	for(a=0;a<=5;a++){
		pop();
	}*/
	peep();
	display();
	pop();
	peep();
	display();
	getch();
}

