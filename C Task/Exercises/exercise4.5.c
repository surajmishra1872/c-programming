//5.	Write a program to find product of first n numbers.
#include<stdio.h>
void main()
{
	int a,i,pro=1;
	printf("Enter A Number:");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		pro=pro*i;
	}
	printf("Product Of first %d Number is:%d",a,pro);
}
