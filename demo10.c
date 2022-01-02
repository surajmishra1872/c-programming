// wap to input total fee of your graduation and there is 10% discount.
// if fee is greater than 2000 and there is 20% discount if fee is less than 20000.
//if fee is 20000 then discount 15%
//calculate the total fee after discount
#include<stdio.h>
int main()
{
	int fee,disper;
	printf("Enter Your Fee Of Graduation:");
	scanf("%d",&fee);
	disper=fee>20000?10:(fee==20000?15:20);
	printf("Discount fee is:%d",(fee-(fee*10)/100));
	
}
