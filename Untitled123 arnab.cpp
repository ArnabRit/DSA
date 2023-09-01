#include<stdio.h>
#include<conio.h>
#define max 10
int top=-1;
int st[max];
void push(int val){
	if(top=max-1){
		printf("the stack is full");
	}
	else{
		top++;
		st[top]=val;
	}
}
int pop(int val){
	if(top==-1){
		printf("stack underflow");
	}
	else{
		val=st[top];
		top--;
		return val;
	}
}
int main(){
	int val,n,i;
	int arr[100];
	printf("\n enter the number of elements in array = ");
	scanf("%d",&n);
	printf("\n enter the elements or array :");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
		push();
	for(i=0;i<n;i++){
		val = pop(val);
		arr[i] = val;
	}
	printf("\n the reversed array is :");
	for(i=0;i<n;i++)
		printf("\n %d",arr[i]);
	getch();
	return 0;
}
