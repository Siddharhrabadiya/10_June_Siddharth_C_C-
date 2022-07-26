#include<stdio.h>
#include<conio.h>
void main()
{
	int no,a=0;
	clrscr();
	printf("enter the numbers:");
	scanf("%d",&no);
	while(no!=0)
	{
		a+=no%10;
		no=no/10;
	}
	printf("summation is: %d",a);
	getch();
}