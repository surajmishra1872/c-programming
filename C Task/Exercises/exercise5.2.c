//wap to add all number from given series
#include<stdio.h>
void main()
{
	int a,b,sum=0,i;
	printf("Please enter starting point number:");
	scanf("%d",&a);
	printf("Please enter ending point number:");
	scanf("%d",&b);
	for(i=a;i<=b;i++)
	{
		sum=sum+i;
	}
	printf("Sum is:%d",sum);
	
}
