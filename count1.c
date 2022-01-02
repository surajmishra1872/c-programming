//wap to count how many numbers are totaly divisible by 3 how many 5 withing 1 to 50.
#include<stdio.h>
void main()
{
	int i,count5=0,count3=0;
	for(i=1;i<=50;i++)
	{
		if(i%3==0)
		{
		count3++;	
		}
		if(i%5==0)
		{
			count5++;
		}
	}
	printf("Total Number Divided by 5 is:%d",count5);
	printf("\nTotal Number Divided by 3 is:%d",count3);
}
