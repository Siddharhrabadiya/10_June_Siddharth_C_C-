#include<stdio.h>
int main()
{
    int no=10,i,a[no],largenumber;
    printf("enter the %d numbers in array.\n",no);
    for(i=0;i<no;i++)
    {
        scanf("%d",&a[i]);
    }
    largenumber = a[0];
    for(i=1;i<no;i++)
    {
        if(largenumber<a[i])
            
            largenumber = a[i];
    }
    printf("\n largest number of array :%d\n",largenumber);
    
    
}
