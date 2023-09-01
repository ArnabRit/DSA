#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	int H,M,S,h,m,s,x=0;
	printf("Enter current time in 24hr format :");
	scanf("%d%d%d",&H,&M,&S);
	printf("set the alarm");
	scanf("%d%d%d",&h,&m,&s);
	if(H<24&&M<60&&S<60&&h<24&&m<60&&s<60)
	{
		loop:
			if(H==h&&M==m&&S==s)
			{
				loop1:
					if(x<=20)
					{
						system("cls");
						printf(".....Time up.....\a");
						sleep(3000);
						x++;
					}
					goto loop1;
			}
			system("cls");
			printf("%d:%d:%d",H,M,S);
			sleep(1000);
			S++;
			if(S==60)
			{
				S=0;
				M++;
			}
			if(M==60)
			{
				M=0;
				H++;
			}
			if(H==24)
			{
				H=0;
			}
			goto loop;
	}
	else
	printf("you entered invalid time format");
	return 0;
}
