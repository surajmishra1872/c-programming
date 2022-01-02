//when we have to count something in loop.
//wap to count how many numbers are divisible by 3 within 1 to n
#include<stdio.h>
void main()
{
	int i,n,count=0;
	printf("Enter last value of series:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%3==0)
		{
			count++;
		}
	}
	printf("Total values divisible by 3 is:%d",count);
}
