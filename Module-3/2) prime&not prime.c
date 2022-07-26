#include<stdio.h>
int main()
{
    int a,n,b=0;
    printf("enter number is prime or not prime:");
    scanf("%d",&a);
    for(n=2;n<a;n++)
        
    {
        if(a%n==0)
        {
            b++;
            goto done;
        }
    }
done:
    {
        if(b==0)
        {
            printf("\nnumber is prime");
        }
        else
        {
            printf("\nnumber is not prime");
        }
    }
}
