//Write a program to carry out the arithmetic operations addition
//subtraction, multiplication,and division between to variable values.
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
switch(x)
{
	case '+':
		printf("\nAddition is:%d",a+b);
		break;
	case '-':
		printf("\nSubstraction is:%d",a-b);
		break;
	case '*':
		printf("\nMultiplication is:%d",a*b);
		break;
	case '/':
		printf("\nDivision is:%d",a/b);
		break;
	default:
		printf("\n Sorry .. !! Unexpected Operations.");
}
}
