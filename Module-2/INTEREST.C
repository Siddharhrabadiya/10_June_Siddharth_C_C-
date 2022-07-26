#include<stdio.h>
#include<conio.h>
void main()
{
float r,t,p;
float si,ci;
clrscr();
printf("enter your value:");
scanf("%f",&p);
printf("your common rate:");
scanf("%f",&r);
printf("enter the time:");
scanf("%f",&t);
si=p*r*t/100;
printf("your simple interest:%f\n",si);
ci=p*(1+r/100)*t-p;
printf("your compound interest:%f",ci);
getch();
}