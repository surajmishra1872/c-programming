//WAP A PROGRAM SWAPPING OF TWO INTEGERS.
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter value of A:");
	scanf("%d",&a);
	printf("Enter value of b:");
	scanf("%d",&b);	
	c=a;
	a=b;
	b=c;
	printf("Value of A after swaping is:%d",a);
	printf("\nValue of b after swaping is:%d",b);
}
