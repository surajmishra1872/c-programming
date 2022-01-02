//wap to input ten student name  and age and print student is eligible to voting or not with name.
#include<stdio.h>
struct vote
{
	int age;
	char name[20];
};
void main()
{ 
	int i,j;
	struct vote s[10];
	for(i=0;i<=9;i++)
	{
	printf("Enter %d student name and age:",i+1);
	gets(s[i].name);
	fflush(stdin);
	scanf("%d",&s[i].age);
	fflush(stdin);	
	}
	for(j=0;j<=9;j++)
	{
		if(s[j].age>=18)
		{
			printf("%s ,You are eligible for vote.\n",&s[j].name);
		}
	}
}
