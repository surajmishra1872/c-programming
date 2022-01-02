/*
wap to find factorial of number.
void getfact()
*/
#include<stdio.h>
void getfact()
  {
	int num,fact=1,i;
	printf("Enter Number For factorial:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("Factorial of number is:%d",fact);
   }

void main()
{
	getfact();
	
}
