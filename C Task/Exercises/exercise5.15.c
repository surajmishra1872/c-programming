//wap to check a number is a armstrong number 
//or not=153=1+125+27=153 this is armstrong 22:4+4= not armstrong
#include<stdio.h>
void main()
{
	int num,arm=0,i,rem,temp=0;
	printf("Enter a number:");
	scanf("%d",&num);
	temp=num;
	for(num;num>0;num=num/10)
	{
		rem=num%10;
		arm=arm+(rem*rem*rem);
	}
	if(arm==temp)
	{
		printf("Number is armstrong.");
	}
	else
	{
		printf("Number is not pelindrome.");
	}
}
