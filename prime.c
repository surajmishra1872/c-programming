#include<stdio.h>
void main()
{
	int num,rem=0,i;
	printf("Enter a number:");
	scanf("%d",&num);
	if(num==1 || num==0)
	{
		printf("Nither prime or not.");
	}
	else
	{
		for(i=2;i<=num-1;i++)
		{
			rem=num%i;
			if(rem==0)
			{
			printf("\nNot Prime");	
			break;
			}
			else
			{
				printf("\nPrime");
				break;
			}
		}
		
	}
}
