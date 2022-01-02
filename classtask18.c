/*
wap to find factorial of number.
void getfact(int a)
*/
#include<stdio.h>
void getfact(a)
  {
	int fact=1,i;
	
	for(i=1;i<=a;i++)
	{
		fact=fact*i;
	}
	printf("Factorial of number is:%d",fact);
   }

void main()
{
	int num;
	printf("Enter Number For factorial:");
	scanf("%d",&num);
	getfact(num);
	
}
