#include<stdio.h>
#include<string.h>
int string(char a[20],char b[20]);

int main()
{
    char a[20],b[20];
    printf("enter the first string : ");
    scanf("%s",a);
    strcpy(b,a);
    printf("copy string is : %s\n",b);
    return 0;
}

