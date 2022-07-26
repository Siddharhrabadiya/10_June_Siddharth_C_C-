#include<stdio.h>
int palindrome(int number)
{
    int a,b,reverse=0;
    a=number;
    
    while(number!=0)
    {
        b=number%10;
        reverse=reverse*10+b;
        number/=10;
    }
    if(reverse==a)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int number;
    printf("enter the number : ");
    scanf("  %d",&number);
    if(palindrome(number)==0)
    {
        printf("****this number is a palindrome number.****\n");
    }
    else
    {
        printf("****this number is not palindrome number.****\n");
    }
    
}
