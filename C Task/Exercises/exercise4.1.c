//1.	Write a program to display 1 to 10 numbers.
#include<stdio.h>
void main()
{
	int a,i,sum=0;
	printf("Enter A Number:");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		sum=sum+i;
	}
	printf("Sum Of %d Number is:%d",a,sum);
}
