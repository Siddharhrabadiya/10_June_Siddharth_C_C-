#include<stdio.h>
#include<conio.h>
void main()
{
    char ch[20];
    FILE *fp;
    clrscr();
    fp=fopen("hello.txt","r");
    fscanf(fp,"%s",&ch);
    printf("\nfile data is : %s",ch);
    fclose(fp);
    getch();
 }