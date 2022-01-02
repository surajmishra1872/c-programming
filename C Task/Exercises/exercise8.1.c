//Wap to input 10 elements and find sum of all.
#include<stdio.h>
void main()
{
	int i,j,sum=0,arr[10];
	printf("Enter 10 Elemets");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<=9;i++)
	{
		sum=sum+arr[i];
	}
	printf("Total is:%d",sum);
	
}
