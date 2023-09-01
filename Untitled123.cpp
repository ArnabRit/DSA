#include<stdio.h>
#include<conio.h>
#define max 5
int front=-1,rear=-1;
int queue[max];
void insert(){
	int a;
	printf("enter the number = ");
	scanf("%d",&a);
	if(front==0&&rear==max-1){
		printf("\n overflow");
	}
	else if (front==-1&&rear==-1){
		front=rear=0;
		queue[rear]=a;
	}
	else if (rear==max-1&& front!=0){
		rear=0;
		queue[rear]=a;
	}
	else{
		rear++;
		queue[rear]=a;
	}
}
int delete_element(){
	int val;
	if(front==-1&&rear==-2){
		printf("\n underflow");
		return -1;
	}
	val = queue[front];
	if (front==rear){
		front = rear-1;
	}
	else{
		if(front==max-1){
			front=0;
		}
		else{
			front ++;
		}
	}
	return val;
}
int main(){
	int option,val;
	do
	{
		printf("\n*****************************");
		printf("\n 1. insert an element ");
		printf("\n 2. delete an element ");
		printf("\n 3.exit");
		printf("\n enter your option : ");
		scanf("%d",&option);
		switch(option)
		{
			case 1:
				insert();
				break;
			case 2:
				val = delete_element();
				if(val!=-1){
					printf("\n the number deleted is : %d", val);
				}
				break ;	
		}
	}
	while (option!=4);
	getch ();
	return 0;
}
