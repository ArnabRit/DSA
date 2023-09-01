#include<stdio.h>
#include<conio.h>
void bubble_sort(int a[],int n)
{
	int temp,i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
void main()
{
	int i,a[100],n;
	printf("the size of the array = ");
	scanf("%d",&n);
	printf("the elements of the arrays = \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	bubble_sort(a,n);
	printf("\n the sorted list is = ");
	for(i=n;i>=0;i--)
	{
		printf("\t %d",a[i]);
	}
	getch();
}
