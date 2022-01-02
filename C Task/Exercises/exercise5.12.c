//wap to print sum of digits of a number
#include<stdio.h>
void main()
{
	int num,i,sum=0,n=0;
	printf("Enter a Number:");
	scanf("%d",&num);
	for(i=num;i>=1;i++)
	{
		n=num%10;
		sum=sum+n;
		num=num/10;
	}
	printf("Sum Of Total Digits is:%d",sum);
}
