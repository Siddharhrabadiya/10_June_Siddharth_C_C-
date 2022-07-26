#include<stdio.h>
int main()
{
    int i,j,a[3][3],largenumber;
    printf("enter the matrix number.");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&a[i][j]);
    }
    largenumber = a[0][0];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        if(largenumber<a[i][j])
            largenumber = a[i][j];
        }
    }
    printf("largest number of matrix : \t%d\n",largenumber);
    
    
}
