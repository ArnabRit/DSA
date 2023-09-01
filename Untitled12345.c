#include<stdio.h>
#include<conio.h>
void main()// nested loop
{	
	int i=0,j=0,n= 0;
	printf("enter the number of row = ");
	scanf("%d",&n);
	int k=n;
	for(i=1;i<=n;i++){
		for(j=n;j>=i;j--){
			printf("%d",k);
			k--;	
		}
		k=n;
		printf("\n");
	}
	getch();
}
