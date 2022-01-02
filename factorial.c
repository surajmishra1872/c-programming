//wap to find factorial of a number
#include<stdio.h>
void main()
{
	int a,i,fact;
	printf("Enter a number for factorial:");
	scanf("%d",&a);
	for(i=a;i>=1;i--)
	{
		fact=fact*i;
	}
	printf("Factorial is:%d",fact);
}
