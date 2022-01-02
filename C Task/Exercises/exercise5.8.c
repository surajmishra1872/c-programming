//8)	Wap to count total number divisible by 3 and 5 and 7 withing a given series
#include<stdio.h>
void main()
{
	int a,div3=0,div5=0,div7=0,i;
	printf("Enter a number:");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		if(i%3==0)
		{
			div3++;
		}
		if(i%5==0)
		{
			div5++;
		}
		if(i%7==0)
		{
			div7++;
		}
	}
	printf("\nTotal Number Divided By 3 is:%d",div3);
	printf("\nTotal Number Divided By 5 is:%d",div5);
	printf("\nTotal Number Divided By 7 is:%d",div7);
}
