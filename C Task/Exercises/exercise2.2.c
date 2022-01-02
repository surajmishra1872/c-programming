//Write a program to check whether the given number is even or odd.
#include<stdio.h>
void main()
{
	int a;
	printf("Enter a Number to check number is even or odd.:");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("%d\tis Even.",a);
	}
	else
	{
		printf("%d\tis odd.",a);
	}
}
