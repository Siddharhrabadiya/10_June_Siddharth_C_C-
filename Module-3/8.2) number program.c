#include<stdio.h>
#include<conio.h>
int main()
{
    int  i,j,k=1;
    clrscr();
   for (i=1;i<=4;i++)
   {
      for (j=1; j<=i;j++)
      {
         printf("%d ",k);
         k++;
      }
      printf("\n");
   }
   getch();
}
