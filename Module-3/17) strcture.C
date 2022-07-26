#include<stdio.h>
#include<conio.h>
struct employe
{
	char empname[25],address[30];
	int empno,empage;
};
void main()
{
	struct employe e1,e2,e3,e4,e5;
	int emp;
	clrscr();
	printf("enter the emp-no,emp-name,adress and emp-age ofemploye 1 : ");
	scanf("%d%s%s%d",&e1.empno,e1.empname,e1.address,&e1.empage);
	scanf("%c",&emp);
	printf("enter the emp-no,emp-name,adress and emp-age ofemploye 2 : ");
	scanf("%d%s%s%d",&e2.empno,e2.empname,e2.address,&e2.empage);
	scanf("%c",&emp);
	printf("enter the emp-no,emp-name,adress and emp-age ofemploye 3 : ");
	scanf("%d%s%s%d",&e3.empno,e3.empname,e3.address,&e3.empage);
	scanf("%c",&emp);
	printf("enter the emp-no,emp-name,adress and emp-age ofemploye 4 : ");
	scanf("%d%s%s%d",&e4.empno,e4.empname,e4.address,&e4.empage);
	scanf("%c",&emp);
	printf("enter the emp-no,emp-name,adress and emp-age ofemploye 5 : ");
	scanf("%d%s%s%d",&e5.empno,e5.empname,e5.address,&e5.empage);
	scanf("%c",&emp);
	printf("%d %s %s %d\n",e1.empno,e1.empname,e1.address,e1.empage);
	printf("%d %s %s %d\n",e2.empno,e2.empname,e2.address,e2.empage);
	printf("%d %s %s %d\n",e3.empno,e3.empname,e3.address,e3.empage);
	printf("%d %s %s %d\n",e4.empno,e4.empname,e4.address,e4.empage);
	printf("%d %s %s %d\n",e5.empno,e5.empname,e5.address,e5.empage);
	getch();
}