//4.	Write a program to find sum of first n numbers.
#include<stdio.h>
void main()
{
	int a,i,sum=0;
	printf("Enter A Number:");
	scanf("%d",&a);
	for(i=0;i<=a;i++)
	{
		sum=sum+i;
	}
	printf("Sum Of first %d Number is:%d",a,sum);
}

