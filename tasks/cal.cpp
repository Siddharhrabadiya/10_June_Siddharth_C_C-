#include<stdio.h>
int main()
{
	FILE* fptr;
	float a,b;
	int choice;
	fptr=fopen("cal.txt","w");
	do
	{
		printf("enter the two values : ");
		scanf("%f %f",&a,&b);

		printf("enter the choice : \n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("%f + %f : %f\n",a,b,a+b);
				fprintf(fptr,"%f + %f : %f\n",a,b,a+b);
				break;
			case 2:
				printf("%f - %f : %f\n",a,b,a-b);
				fprintf(fptr,"%f - %f : %f\n",a,b,a-b);
				break;
			case 3:
				printf("%f * %f : %f\n",a,b,a*b);
				fprintf(fptr,"%f * %f : %f\n",a,b,a*b);
				break;
			case 4:
				printf("%f / %f : %f\n",a,b,a/b);
				fprintf(fptr,"%f / %f : %f\n",a,b,a/b);
				break;
			case 5:  
            	printf ("Exit");     
            	break;
            default :
            	printf("wrong choice");
            	break;
		}
	}while(choice!=5);
	return 0;
	fclose(fptr);
}

