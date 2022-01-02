//WAP to print square of number only if value is not greater than 5
#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	if(a>!5)
	{
		printf("Square of number is:%d",a*a);
	}
}
