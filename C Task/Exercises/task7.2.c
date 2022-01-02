//Wap to find all prime numbers from 1 to 50.
#include<stdio.h>
void main()
{
	int i,j,count;
	for(i=1;i<=50;i++)
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
