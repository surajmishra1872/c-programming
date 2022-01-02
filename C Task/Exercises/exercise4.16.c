//Write a program to find sum of all individual digits in a given number.
#include<stdio.h>
int func(int);
void main()
{
	int a,rem,i,sum=0,j;
	printf("Enter Number:");
	scanf("%d",&a);
	rem=a%10;
	a=a/10;
	for(i=1;i<=rem;i++)
	{
		for(j=i;j<=i;j++)
		{
			sum=sum+j;
		}
		printf("Sum of %d is:%d\n",i,sum);
	}
	
	
}





