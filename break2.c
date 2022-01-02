//wap to print even number a given series only if numberis less than 100
#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter a starting number:");
	scanf("%d",&a);
	printf("Enter a Ending number:");
	scanf("%d",&b);
	{
		for(a;a<=b;a++)
		{
			if(a%2==0)
			{
				printf("%d\n",a);
			}
			if(a>100)
                {
                	break;
				}
		}
	}
}
