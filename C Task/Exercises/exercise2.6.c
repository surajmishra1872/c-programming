//Write a program to check whether the given year is a leap year or not.
#include<stdio.h>
void main()
{
	int year;
	printf("Enter Year to Check Year is Leap or Not:");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("Year Is Leap Year.");
	}
	else
	{
		printf("Year is not leap Year.");
	}
}
