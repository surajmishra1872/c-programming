//Write a program to check whether the given number is positive or negative or zero.
#include<stdio.h>
void main()
{
	int a;
	printf("Enter A Number:");
	scanf("%d",&a);
	if(a>0)
	{
		printf("Entered Number is Positive.");
	}
	else if(a<0)
	{
		printf("Entered Number is Negative");
	}
	else if(a==0)
	{
		printf("Entered Number is Zero");
	}
	else
	{
		printf("Yehh....!!You Inputed Wrong.");
	}
	
}
