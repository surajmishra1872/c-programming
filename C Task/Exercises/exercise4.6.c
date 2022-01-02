//6.	Write a program to find sum of  n given  numbers.
#include<stdio.h>
void main()
{
	int a,i,sum=0;
	int b[10]={1,2,3,4,5,6,7,8,9,10};
	printf("Enter A Number:");
	scanf("%d",&a);
	for(i=0;i<=a-1;i++)
	{
		//sum=sum+i;
		sum=sum+b[i];
	}
	printf("Sum Of given number  is:%d",sum);
}
