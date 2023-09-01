#include<stdio.h>
#include<conio.h>
#define max 5
int queue[max];
int front = -1 ,rear = -1;
void insert()
{	int a;
	printf("enter the value= ");
	scanf("%d",&a);
	if (front == 0 && rear == max-1){
		printf("\n overflow");
	}
	else if (front == -1 && rear == -1){
		front = rear = 0;
		queue[rear]= a;
	}
	else if (rear == max-1 && front!=0){
		rear = 0;
		queue[rear]= a;
	}
	else{
		rear ++;
		queue[rear]= a;
	}
}
void delete_element()
{
	int b;
	if(front==-1&&rear==-1)
	{
		printf("\n underflow");
	}
	b=queue[front];
	if(front==rear){
		front=rear=-1;
	}
	else{
		if(front==max-1){
			front=0;
		}else{
			front++;
		}
	}
	printf("\n the deleted element is = %d",b);
}
void peek()
{
	if(front==-1&&rear==-1)
	{
		printf("\n queue is empty");
	}
	else
	{
		printf("\n the first value in the queue is = %d",queue[front]);
	}
}
void display()
{
	int i;
	printf("\n");
	if(front==-1&&rear==-1){
		printf("\n the queue is empty");
	}
	else{
		if(front<rear)
		{
			for(i=front;i<=rear;i++){
				printf("\t %d",queue[i]);
		}
	}
	else{
		for(i=front;i<max;i++){
			printf("\t %d",queue[i]);
		}
		for(i=0;i<=rear;i++){
			printf("\t %d",queue[i]);
		}
	}
}
}
int main(){
	int option,val;
	do{
		printf("\n********main manu**********");
		printf("\n 1. for insert");
		printf("\n 2. for delete");
		printf("\n 3. for peek");
		printf("\n 4. for display");
		printf("\n enter your option = ");
		scanf("%d",&option);
		switch(option){
			case 1:
				insert();
				break;
			case 2:
				delete_element();
				break;
			case 3:
				peek();
				break;
			case 4:
				display();
				break;
			default:
				printf("enter a valid option");
		}
	}while(option!=5);
	getch();
	return 0;
}
