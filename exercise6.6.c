//6.	wap to remove all 0 from number
//example:300509
//359
#include<stdio.h>
void main()
{
	int num,rem,sum=0,remz,sumz=0;
	printf("Enter a number:");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		if(rem!=0)
		{
			sum=sum*10+rem;
		}
	num=num/10;
	}
	while(sum>0)
	{
		remz=sum%10;
		//if(remz!=0)
		//{
			sumz=sumz*10+remz;
		//}
		sum=sum/10;
	}
printf("Number Without Zero is:%d",sumz);
}
