//wap to find a greatest number within 2 number by using UDF
//void greater(int a,int b)
#include<stdio.h>
void greater(int a,int b)
{
	if(a>b)
	{
		printf("%d is greater than %d",a,b);
	}
	else
	{
		printf("%d is greater than %d",b,a);
	}
	
}
void main()
{
	int num1,num2;
	printf("Enter Numbers To find Greater:");
	scanf("%d %d",&num1,&num2);
	greater(num1,num2);
}
