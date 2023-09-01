#include<stdio.h>
#include<conio.h>
void main ()
{
	int arr[100];
	int i,n,m,pos=-1;
	printf("entert the size of array = ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("%d the values are =  : ",i);
		scanf("%d",&arr[i]);
	}printf(" enter the number which do you want to chake = ");
	scanf("%d",&m);
	for(i=0;i<n;i++){
		if(arr[i]==m)
		{
		pos=i;
		break;
		}
	}
	if(pos!=-1){
		printf("number is founded at position = %d",pos);
	}else{
		printf("value is not founded");
	}getch();
}
