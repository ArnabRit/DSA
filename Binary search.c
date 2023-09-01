#include <stdio.h>
#include<conio.h>
void main()
{
	int arr[100];
	int i,n,m,mid,lb,ub,pos;
	printf("enterthe size of array = ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d the elements of array are = ",i);
		scanf("%d",&arr[i]);
	}
	printf("enter the number which you want to find = ");
	scanf("%d",&m);
	lb=0;
	ub=n-1;
	pos=-1;
	while(lb<=ub){
		mid=(lb+ub)/2;
		if(arr[mid]==m){
			pos=mid;
			break;
		}
		else if (arr[mid]<m){
			lb=mid+1;				
		}
		else{
			ub=mid-1;
		}
	}
	if(pos!=-1)
	{
		printf("the element is founded at position = %d",pos);
	}
	else{
		printf("element not founded");
	}getch();
}
