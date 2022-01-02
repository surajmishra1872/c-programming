//WAP to print square of number only if number is 5 or 3
#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	if(a==5 || a==3)
	{
		printf("Square of number is:%d",a*a);
	}
}
