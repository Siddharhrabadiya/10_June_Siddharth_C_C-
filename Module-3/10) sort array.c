#include<stdio.h>
int main()
{
    int no=5,i,j,b,a[no],number;
    printf("enter the %d numbers for sort the array.\n",no);
    printf("************************************************\n");
    for(i=0;i<no;i++)
    {
        scanf("%d",&a[i]);
    }
    number = a[0];
    for(i=0;i<no;i++)
    {
        for(j=i+1;j<no;j++)
            if(a[i]>a[j])
            {
                b=a[i];
                a[i]=a[j];
                a[j]=b;
            }
    }
    printf("************************************************");
    printf("\n sort the array is:\n");
    printf("************************************************\n");
    for(i=0;i<no;i++)
    {
        printf("%d\n",a[i]);
    }
    
    
}

