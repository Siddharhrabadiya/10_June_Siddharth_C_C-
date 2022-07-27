#include<stdio.h>
int  main()
{
    int no[10],a,i,b;
    printf("enter the array number : ");
    scanf("%d",&a);
    printf("enter the number : \n");
    for(i=0;i<a;i++)
    {
        scanf("%d",&no[i]);
    }
    printf("enter the search number : ");
    scanf("%d",&b);
    for(i=0;i<=a;i++)
    {
        if(no[i]==b)
        {
            printf("%d number's position is %d \n",b,i+1);
        }
    }
    
}
