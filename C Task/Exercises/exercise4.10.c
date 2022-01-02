//Write a program to find factorial of a given number.
#include<stdio.h>
void main()
{
	int i,a,fact=1;
	printf("Enter a number for Factorial:");
	scanf("%d",&a);
	for(i=a;i>=1;i--)
	{
		fact=fact*i;
	}
	printf("Factorual of %d is:%d",a,fact);
}
