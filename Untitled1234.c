#include<stdio.h>
#include<conio.h>
#define max 5
int queue[max];
int front = -1, rear = -1;
void insert()
{
	int n;
	printf("enetr the value is = ");
	scanf("%d",&n);
	if (rear == max-1){
		printf("overflow\n");
	}else if(front==-1&&rear==-1){
		front = rear = 0;
		queue[rear]=n;
	}else{
		rear++ ;
		queue[rear]=n;
	}
}
void delete_element()
{	int a;
	if (front==-1||front>rear){
		printf("underflow");
	}
	else{
		a=queue[front];
		front ++;
		printf("the deleted element is = %d\n",a);
		/*if (front>rear){
			front=rear=-1;
		}*/
	}
}
void main()
{
	int a ;
	for(a=0;a<=max;a++){
		insert();
	}
	for(a=0;a<=max;a++){
		delete_element();
	}
	getch();
}
