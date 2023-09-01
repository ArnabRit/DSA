#include<stdio.h>
#include<conio.h>
void create();
void display();
void insert();
void delete_element();
int a[100],n,i;
void create()
{
	printf("\nenter the size of array = ");
	scanf("%d",&n);
	printf("\nenter the elements into array = ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void display()
{
	printf("the elemnts in the array are = ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
void insert()
{
	int pos,val;
	printf("\nenetr the value = ");
	scanf("%d",&val);
	printf("\nenter the position = ");
	scanf("%d",&pos);
	for(i=n-1;i>=pos;i--)
	{
		a[i+1]=a[i];
	}
	a[pos-1]=val;
	n++;
}
void delete_element()
{
	int pos;
	if(n==0)
	{
		printf("\nthe array is empty");
	}	
	else
	{
		printf("enter the position for delete=");
		scanf("%d",&pos);
		for(i=pos-1;i<n-1;i++)
		{
			a[i]=a[i+1];
		}
		n--;
	}
}
void main()
{
	int option;
	do
	{
		printf("\n*************\n1. create\n2. insert\n3. delete\n4. display\n5. exit");
		printf("\n *************");
		printf("\n enter the option = ");
		scanf("%d",&option);
		switch(option)
		{
			case 1: create();
					break;
			case 2: insert();
					break;
			case 3: delete_element();
					break;
			case 4: display();
					break;
		}
	}
	while(option!=5);
	getch();
}
