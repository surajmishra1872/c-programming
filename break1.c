//wap to printonly four even numbers within a given series
#include<stdio.h>
void main()
{
	int i,a,count;
	printf("Enter staring of series:");
	scanf("%d",&i);
	printf("Enter Ending of series:");
	scanf("%d",&a);
	for(i;i<=a;i++)
	{
		if(i%2==0)
		{
		printf("%d\n",i);
		count++;
	    }
		if(count==4)
		
			break;
				
	}
}
