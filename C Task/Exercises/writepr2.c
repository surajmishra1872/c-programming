//WAP A PROGRAM FOR SWAPPING OF TWO INTEGERS WITHOUT USING THIRD VARIABLE.

#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter value of A:");
	scanf("%d",&a);
	printf("Enter value of B:");
	scanf("%d",&b);	
    a=a-b;
    b=a+b;
    a=b-a;
	printf("Value of A after swaping is:%d",a);
	printf("\nValue of B after swaping is:%d",b);
}
