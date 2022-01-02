#include<stdio.h>
void main()
{
	int a;
	printf("Enter number:");
	scanf("%d",&a);
	if(a%2)
	{
	printf("Odd");
	//return 0;
	goto ram;
	}
	printf("Even");
    ram:;
}
