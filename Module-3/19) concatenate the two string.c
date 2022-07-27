#include <stdio.h>
 
int main()
{
    char a[30], b[30],* a1=a,* b2=b;
    printf("Enter 1st string : ");
    scanf("%s",a);
    printf("Enter 2nd string : ");
    scanf("%s",b);
    while(*(++a1));

    while(*(a1++) = *(b2++));
 
    printf("\nConcatenated string : %s \n\n\n", a);
 
    return 0;
}

