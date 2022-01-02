//structer 2
#include<stdio.h>
#include<string.h>
struct emp
{
	char name[50];
	int empid,sallary;
	
};
void main()
{
	 struct emp e,e2;
	printf("Enter 1st Employee Name:");
	scanf("%s",&e.name);
	printf("\nEnter Empid:");
	scanf("%d",&e.empid);
	printf("\nEnter a sallary");
	scanf("%d",&e.sallary); 
	printf("\n");
	printf("Name is:%s",e.name);
	printf("\nEmployee Id is:%d",e.empid);
	printf("\nEmployee Salary is:%d",e.sallary);
	
	
}
