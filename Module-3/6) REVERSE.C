#include<stdio.h>
#include<conio.h>
void main()
{
	unsigned int a,b=0,c;
	clrscr();
	printf("enter the numbers:");
	scanf("%u",&a);
	do
	{
		 c=a%10;
		 b=b*10+c;
		 a/=10;

	}while(a!=0);
	printf("your reverse numbers:%u",b);
	getch();
}