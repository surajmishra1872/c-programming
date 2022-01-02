//wap to find multiplication of  all number within 1 to 10
#include<stdio.h>
void main()
{
	int i;
	long int multi=1;
	for(i=1;i<=10;i++)
	{
		multi=multi*i;
	}
	printf("Multiplication of numbers is:%d",multi);
}
