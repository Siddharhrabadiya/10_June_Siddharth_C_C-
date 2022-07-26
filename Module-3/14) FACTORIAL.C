#include<stdio.h>
#include<conio.h>
long int factorial(int no)
{
	if(no<=1)
	return 1;
	return no*factorial(no-1);
}
void main()
{
	int no;
	clrscr();
	printf("enter the numbers:");
	scanf("%d",&no);
	printf("%ld",factorial(no));
	getch();
}