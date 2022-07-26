#include<stdio.h>
#include<conio.h>
#define PI 3.141
void main()
{
	float b,h,area;
	int r,choice;
	clrscr();
	printf("enter the base no:");
	scanf("%f",&b);
	printf("enter the height no:");
	scanf("%f",&h);
	printf("enter the radius no:");
	scanf("%d",&r);
	printf("triangle-1.\nrectangle-2.\ncircle-3");
	printf("\nenter the choice no:");
	area=(b*h)/2;
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("area of triangle:%f",area);
			break;
		case 2:
			printf("area of rectangle:%f",b*h);
			break;
		case 3:
			printf("area of circle:%f",PI*r*r);
			break;
        default:
            printf("\nuknow choice number.");
            break;
	}
	getch();


}
