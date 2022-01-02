//wap to input a 2 digit number and print tens digit and once digit.
/*
Example:45
 4
 5
*/
#include<stdio.h>
void main()
{
	int num,rem,sum=0,remz,sumz=0;
	printf("Enter a number:");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		sum=sum*10+rem;
		num=num/10;
	}
	while(sum>0)
	{
		remz=sum%10;
		printf("%d\n",remz);
		sum=sum/10;
	}

}
