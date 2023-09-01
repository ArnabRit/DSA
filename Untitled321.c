#include<stdio.h>
#include<conio.h>
#define max 5
int queue [max];
int front=-1,rear= -1;
void insert()
{
	int a;
	printf("enter the element = ");
	scanf("%d",&a);
	if(rear==max-1){
		printf("overflow");
	}
	else if (front==-1&&rear==-1){
		front= rear=0;
		queue[rear]=a;
	}else{
		rear = rear+1;
		queue[rear]=a;
	}
}
int delete_element()
{
	int val;
	if(front==-1||front>rear){
		printf("underflow");
	}else{
		val = queue[front];
		front++;
		return val;
	}
}
int peek()
{
	if(front==-1||front>rear){
		printf("\n queue is empty");
		return 0;
	}else{
		return queue[front];
	}
}
void display()
{
	int i;
	printf("\n");
	if(front==-1||front>rear)
	printf("\n queue is empty");
	else
	{
		for(i=front;i<=rear;i++)
		printf("\t %d", queue[i]);
	}
}
int main(){
	int option,val;
	do{
		printf("\n ***********main menu*********");
		printf("\n 1. insert an element");
		printf("\n 2. delete an element");
		printf("\n 3. peek");
		printf("\n 4. Display the queue");
		printf("\n 5. Exit");
		printf("\n *****************************");
		printf("\n Enter your option : ");
		scanf("%d",&option);
		switch(option){
			case 1:
				insert();
				break;
			case 2:
				val=delete_element();
				printf("\n the number deleted is : %d",val);
				break;
			case 3:
				val = peek();
				printf("\n the first value is queue is : %d",val);
				break;
			case 4:
				display();
				break;
		}
	}while(option!=5);
	getch();
	return 0;
}
