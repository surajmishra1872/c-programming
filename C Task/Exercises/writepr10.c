//WAP to print sum of square of two numbers only if both numbers are not 5.
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a first number:");
	scanf("%d",&a);
	printf("Enter a second number:");
	scanf("%d",&b);
	if(a!=5 && b!=5)
	{
		printf("Square of number First is:%d",a*a);
		printf("\nSquare of number Second is:%d",b*b);
	}
}
