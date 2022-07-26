#include<stdio.h>
#include<conio.h>
void main()
{
	int i,no,a1=0,a2=1,c;
	clrscr();
	c=a1+a2;
	printf("enter the numbers:");
	scanf("%d",&no);
	printf("series:\n%d\n%d",a1,a2);
	for(i=3;i<=no;i++)
	{
		printf("\n%d",c);
		a1=a2;
		a2=c;
		c=a1+a2;

	}
	getch();
}