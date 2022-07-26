#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,s=5;
    clrscr();
   for(a=0;a<=5;a++)
    {
      for(b=0;b<=a;b++)
      {
          printf(" ");
      }
      for(c=0;c<=s;c++)
      {
          printf("*");
      }
      s--;
      printf("\n");
    }
    getch();
}

