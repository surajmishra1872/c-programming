//2.	wap to input a number and print 1 at the place of even digits 
//and print zero at the place of odd digits
#include<stdio.h>
void main()
{
	int num,rem=0;
	printf("Enter a Number:");
	scanf("%d",&num);
	while(num>0)
	{
	rem=num%10;
	if(rem%2==0)
	{
		printf("Number at the place of even is:%d\n",1);
	}
	if(rem%2==1)
	{
	printf("Number at the place of odd is:%d\n",0);	
	}
	num=num/10;
	}
}

