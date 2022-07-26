#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    clrscr();
    for(a=0;a<=5;a++)
    {
        for(b=a;b>=1;b--)
        {
            printf("*",b);
        }
        printf("\n",a);
    }
    getch();
}
