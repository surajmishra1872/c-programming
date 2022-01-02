//wap to input a number and count how many digits is even and how many digits are odd
#include<stdio.h>
void main()
{
	int num,rem,oddcount=0,evencount=0;
	printf("Enter a Number:");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		if(rem%2==0)
		{
			evencount++;
		}
		if(rem%2==1)
		{
			oddcount++;
		}
		num=num/10;
	}
printf("Total Digits of Odd is:%d\n",oddcount);
printf("Total Digits of Even is:%d",evencount);
}
