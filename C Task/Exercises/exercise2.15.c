//Write a program to perform calculator operations( +, -, *, / ) on given two numbers.
#include<stdio.h>
void main()
{
	int a,b;
	char x;
	printf("Enter First Number:");
	scanf("%d",&a);
	printf("Enter Second Number:");
	scanf("%d",&b);
	printf("Enter Operations:");
	x=getche();
	if(x=='+')
	{
		printf("\nSum of Number is:%d",a+b);
	}
	if(x=='-')
	{
		printf("\nSubstraction of Number is:%d",a-b);
	}
	if(x=='*')
	{
		printf("\nMultiplication of Number is:%d",a*b);
	}
	if(x=='%')
	{
		printf("\nModules of Number is:%d",a%b);
	}
	if(x=='/')
	{
		printf("\nModules of Number is:%d",a/b);
	}
}
