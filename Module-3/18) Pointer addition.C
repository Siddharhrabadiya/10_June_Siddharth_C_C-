#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,*c,*d,e;
	clrscr();
	printf("enter the number:");
	scanf("%d%d",&a,&b);
	c=&a;
	d=&b;
	e=*c+*d;
	printf("ans is = %d",e);
	getch();
}