#include<stdio.h>
#include<conio.h>
#define max 10
int queue[max];
int front=-1,rear=-1;
void insert(){
	int a;
	printf("\n enter the number = ");
	scanf("%d",&a );
	if (rear==max-1){
		printf("\n queue overflow");
	}
	else if (front==-1&&rear==-1){
		front=rear=0;
	}
	else{
		rear++;
	}queue[rear]= a;
}
int delete_element(){
	int val;
	if(front==-1||front>rear){
		printf("queue underflow");
		return 0;
	}
	else{
		val = queue[front];
		front++;
		return val;
	}
}
void main()
{
	int option,val;
	do
	{
		printf("\n\n*********main manue***********");
		printf("\n 1. insert element ");
		printf("\n 2. delete element ");
		printf("\n*************************************");
		printf("\n enter the option ");
		scanf("%d",&option);
		switch(option)
		{
			case 1:
				insert();
				break;
			case 2:
				val=delete_element();
				printf("\n the deleted element is : %d",val);
				break;				
		}
	}while(option!=3);
	getch();
	return 0;
}
