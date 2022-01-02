/*
Write a program to calculate net amount by accepting amount value from user.
Amount (Rs)
Discount (%)
1-1000
5%
1001-2000
10%
2001-3000
15%
3001-4000
20%
>4000
25%
*/

#include<stdio.h>
void main()
{
	int a;
	float disc;
	printf("Enter Amount:");
	scanf("%d",&a);
	if(a>=1 && a<=1000)
	{
		disc=a-a*5/100;
		printf("Payble Amount After Discount:%.2f",disc);
	}
	else if(a>=1001 && a<=2000)
	{
		disc=a-a*10/100;
		printf("Payble Amount After Discount:%.2f",disc);
	}
	else if(a>=2001 && a<=3000)
	{
		disc=a-a*15/100;
		printf("Payble Amount After Discount:%.2f",disc);
	}
	else if(a>=3001 && a<=4000)
	{
		disc=a-a*20/100;
		printf("Payble Amount After Discount:%.2f",disc);
	}
	else
	{
		disc=a-a*25/100;
		printf("Payble Amount After Discount:%.2f",disc);
	}
}
