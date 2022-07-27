#include<stdio.h>
int sort(int no, int* p)
{
    int i,j,b;
    for(i=0;i<no;i++)
    {
        for(j=i+1;j<no;j++)
            if(*(p+i)<*(p+j))
            {
                b=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=b;
            }
    }
    for(i=0;i<=no;i++)
    {
        printf("%d\n",*(p+i));
    }
        return 0;
}
int main()
{
    int no=5,i,a[no],number;
    printf("enter the %d numbers for sort the array.\n",no);
    for(i=0;i<no;i++)
    {
        scanf("%d",&a[i]);
    }
    number = a[0];
    sort(no,a);
}
