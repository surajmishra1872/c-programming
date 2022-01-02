//wap to check a persone is eligible for hr or not 
// only female candidate are allowed for this post
#include<stdio.h>
void main()
{
	char a;
	printf("Enter Your Gender like m For male and f for female :");
	a=getche();
	if(a=='m')
	{
		printf("\nYou Are Not Eligible");
	
	}
	if(a=='f')
	{
		printf("\nYour are Eligible");
	}
}
