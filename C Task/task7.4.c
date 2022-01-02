//Wap to count all prime numbers within 1 to given number. 
#include<stdio.h>
void main()
{
	int i,j,count,a;
	printf("Enter Number:");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{   count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			count++;
		}
	if(count==2)
	{
		printf("%d\n",i);
	}
	}
}
