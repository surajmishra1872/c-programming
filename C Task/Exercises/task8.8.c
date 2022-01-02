//wap to input 10 elements of array and count given value how many times present in array
#include<stdio.h>
void main()
{
	int num,i,j,count=0,arr[10];
	printf("Enter 10 Elements:");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Input a value to search in array:");
	scanf("%d",&num);
	for(j=0;j<=9;j++)
	{
		if(arr[j]==num)
		count++;
	}
printf("Given Value is %d time present in array.",count);	
}
