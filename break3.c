//wap to print only five numbers that is divisible by 3 and 5 both withing a given series.
#include<stdio.h>
void main()
{
	int a,b,count;
	printf("Enter a starting number:");
	scanf("%d",&a);
	printf("Enter a Ending number:");
	scanf("%d",&b);
	{
		for(a;a<=b;a++)
		{
			if(a%3==0 && a%5==0)
			{
				printf("%d\n",a);
				count++;
			}
			if(count==5)
                {
                	break;
				}
		}
	}
}

