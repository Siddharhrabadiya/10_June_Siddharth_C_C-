#include<stdio.h>
#include<conio.h>
int main()
{
    int a,value;
    clrscr();
    printf("year is:");
    scanf("%d",&a);
    value=a%4;
    if(value==0)
    {
        printf("\nyear is leap year:");
    }
    else
    {
        printf("\nyear is not leap year:");
    }
     getch();
}   
 