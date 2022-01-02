//wap to sum of all number beetween 1 to n where num divided by 3 is equal to 2
#include<stdio.h>
void main()
{
	int a,i,sum=0;
	printf("Enter a number:");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		if(i%3==2)
		{
			sum=sum+i;
		}
	}
	printf("Sum is:%d",sum);
}
