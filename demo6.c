// wap to demonstrate the use of arithmetic operators

#include<stdio.h>
void main()
{
	int n1 ,n2,n3;
	printf("Enter Three Numbers:");
	scanf("%d %d %d",&n1,&n2,&n3);
	printf("\nsum of numbers is:%d",(n1+n2+n3));
	printf("\n Substraction of numbers is:%d",(n1-n2-n3));
	printf("\n Substraction of First & Second numbers is:%d",(n1-n2));
	printf("\n Multiply of last two number is:%d",n3*(n1-n2));
}
