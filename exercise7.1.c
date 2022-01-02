//Wap to input multiple value from the user find sum of 
//all values until user inputs a negative value.
#include<stdio.h>
void main()
{
	int num,sum=0,i;
	printf("Enter Numbers:");
	for(i=1;i<=5;i++)
	{
		scanf("%d",&num);
		if(num>0)
		{
			sum=sum+num;
		}
		if(num<0)
		{
			break;
		}
	}
printf("Sum is:%d",sum);
}
