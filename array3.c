//wap to store 5 subject marks of a students and find total marks by using array
#include<stdio.h>
void main()
{
	int marks[5],i;
	printf("Enter Five Subject Marks:\n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&marks[i]);
	}
	for(i=0;i<=4;i++)
	{
		printf("Number Of %d Subject is:%d\n",i,marks[i]);
	}
}
