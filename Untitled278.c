#include<stdio.h>
#include<conio.h>
void main()
{
	int i,max,lb,ub,mid,m,arr[100],flag=-1;
	printf("enter the size of array = ");
	scanf("%d",&max);
	for(i=0;i<max;i++)
	{
		printf("%d the element is = ",i);
		scanf("%d",&arr[i]);
	}
	lb=0;ub=max-1;
	printf("enter the element =");
	scanf("%d",&m);
	while(lb<ub)
	{
		mid=(lb+ub)/2;
		if(arr[mid]==m)
		{
			flag=mid;
			break;
		}
		else if(arr[mid]>m)
		{
			ub=mid-1;
		}
		else if(arr[mid]<m)
		{
			lb=mid+1;
		}
	}
	if(flag!=-1)
	{
		printf("the element found at the position = %d",flag);
	}
	else
	{
		printf("the element not found ");
	}
}
