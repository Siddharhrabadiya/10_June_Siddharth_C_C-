#include<stdio.h>
int main()
{
    FILE *fptr;
    char ch[20],b;
    int a,i;
    
    fptr=fopen("table.txt","w");
    printf("enter the number : ");
    scanf("%d",&a);
    for(i=1;i<=10;i++)
    {
        fprintf(fptr,"%d*%d=%d\n",a,i,a*i);
    }
    fclose(fptr);
    fptr=fopen("table.txt","r");
    for(i=0;i<=10;i++)
    {
        fscanf(fptr,"%s",&ch);
        printf("\n%s",ch);
    }
    fclose(fptr);
}
