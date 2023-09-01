#include<stdio.h>
#include<conio.h>
#define max 100
int arr[max];
void main()//selection sort
{
	int i,n,a,t,j;
	printf("enter the range of array = ");
	scanf("%d",&n);
	for (i=0;i<n;i++){
		printf("enter the value = ");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		a=i;
		for(j=i+1;j<n;j++){
		if(arr[j]<arr[i]){
		a=j;	
		}
	}
		t=arr[a];
		arr[a]=arr[i];
		arr[i]=t;
		}
	printf("\n the new array is = ");
	for(i=0;i<n;i++){
		printf("\t %d",arr[i]);
	}
	getch();
}
