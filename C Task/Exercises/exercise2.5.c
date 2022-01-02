/*
Write a program to calculate net amount by accepting amount value from user.
Amount(Rs) Discount(%)
------------------------------------------
Amount>=5000 10%
Otherwise 5%
-------------------------------------------
*/

#include<stdio.h>
void main()
{
	int amount,discount;
	printf("Enter Your Amount:");
	scanf("%d",&amount);
	if(amount>=5000)
	{
		discount=amount-(amount*10)/100;
		printf("Total Paybale amount is:%d",discount);
	}
	else
	{
		discount=amount-(amount*5)/100;
		printf("Total Paybale amount is:%d",discount);	
	}
}
