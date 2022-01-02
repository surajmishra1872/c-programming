//wap to check a year is a leap year or not.
//divide reminder bache 0 year%4==0,1,2,3 
//only if greater than 2000
#include<stdio.h>
void main()
{
	int year;
	printf("Enter Your Year:");
	scanf("%d",&year);
	if(year>2000 && year%4==0)
	{
		printf("Yes it is leap year");
	}
}
