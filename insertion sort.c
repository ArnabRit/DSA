#include<stdio.h>
#include<conio.h>
void insertion_sort(int a[],int n)
{
	int k,j,temp;
	for(k=1;k<n;k++)
	{
		temp=a[k];
		j=k-1;
		while((temp<a[j])&&(j>=0))
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
	}
}
void main()
{
	int a[100],n,i;
	printf("number of total elemnt of array = ");
	scanf("%d",&n);
	printf("enter the elements \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	insertion_sort(a,n);
	printf("elements of array after shorted = \n");
	for(i=0;i<n;i++)
	{
		printf("\t %d",a[i]);
	}
	getch();
}
