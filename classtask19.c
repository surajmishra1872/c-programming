//wap to find a greatest number within 2 number by using UDF
//void greater()
#include<stdio.h>
void greater()
{
	int a,b;
	printf("Enter Numbers To find Greater:");
	scanf("%d %d",&a,&b);
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
	greater();
}
