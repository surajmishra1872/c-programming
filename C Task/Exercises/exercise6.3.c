//wap input a number and print sum of even digits and sum of odd digits.
#include<stdio.h>
void main()
{
	int num,rem,sumeven=0,sumodd=0;
	printf("Enter a Number:");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		if(rem%2==0)
		{
		sumeven=sumeven+rem;	
		}
		if(rem%2==1)
		{
		sumodd=sumodd+rem;	
		}
		num=num/10;
	}
printf("Sum of Odd Numbers is:%d\n",sumodd);
printf("Sum of Even Numbers is:%d",sumeven);
}
