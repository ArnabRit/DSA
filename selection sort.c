#include<stdio.h>
#include<conio.h>
int smallest(int arr[],int k,int n)
{
	int pos = k, small = arr[k], i;
	for(i=k+1;i<n;i++)
	{
		if (arr[i]<small)
		{
			small = arr[i];
			pos = i;
		}
	}
	return pos;
}
void selection_sort(int arr[],int n)
{
	int k,pos,temp;
	for(k=0;k<n;k++)
	{
		pos = smallest(arr,k,n);
		temp = arr[k];
		arr[k]=arr[pos];
		arr[pos]= temp;
	}
}
void main()
{
	int arr[100],i,n;
	printf("enter the size of the array = ");
	scanf("%d",&n);
	printf("enter the elements of array =\n ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	selection_sort(arr,n);
	printf("the sorted elements are ");
	for(i=0;i<n;i++)
	{
		printf("\t %d",arr[i]);
	}
	getch();
}
