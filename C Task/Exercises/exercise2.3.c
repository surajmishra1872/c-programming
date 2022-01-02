//Check whether the given number is multiple of 7 or not.
#include<stdio.h>
void main()
{
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	if(a%7==0)
	{
		printf("%d: is multiple of 7.",a);
	}
	else
	{
	printf("%d: is not multiple of 7.",a);	
	}
}
