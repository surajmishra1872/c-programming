//1.	wap to input a number and print only odd digits of of numbers.
#include<stdio.h>
void main()
{
	int num,i,rem=0;
	printf("Enter a number:");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		if(rem%2==1)
		{
			printf("%d",rem);
		}
	num=num/10;
	
	}
}
