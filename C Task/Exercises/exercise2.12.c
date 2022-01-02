//Write a program to find biggest of three given numbers.

#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter First Number:");
	scanf("%d",&a);
	printf("Enter Second Number:");
	scanf("%d",&b);
	printf("Enter Third Number:");
	scanf("%d",&c);
	if(a<b && b>c)
	{
		printf("\n %d : is Greater Number.",b);
	}
	else if(a>c)
	{
		printf("%d : is Greater Number.",a);
	}
	else
	{
	printf("%d : is Greater Number.",c);	
	}
}
