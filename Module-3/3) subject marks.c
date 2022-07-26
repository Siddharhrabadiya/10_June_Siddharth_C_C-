#include<stdio.h>
int main()
{
    int a,b,c,d,e,total;
    float percentage;
    printf("\nenter your 5 subject marks:");
    scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);
    total=a+b+c+d+e;
    printf("\nyour total marks:%d",total);
    percentage= total/5;
    printf("\nyour percentage:%f",percentage);
   if (percentage>75)
   {
       printf("\ndistinction");
   }
    else if(percentage>60&percentage<=75)
    {
        printf("\nfirst class");
    }
    else if(percentage>50&percentage<=60)
    {
        printf("\nsecond class");
    }
    else if(percentage>35&percentage<=50)
    {
        printf("\npass");
    }
    else
    {
        printf("\nfail");
    }
}


