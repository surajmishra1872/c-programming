//wap to input 10 elements and check a given value is present in array or not and print indexing.
//wap to input 10 elements and print all indexing on which a value is present in array

#include<stdio.h>
void main()
{
	int arr[10],index,val;
	printf("Enter 10 elements:");
	for(index=0;index<=9;index++)
	{
		scanf("%d",&arr[index]);
	}
	printf("Input a value to search in array:");
	scanf("%d",&val);
	for(index=0;index<=9;index++)
	{
		if(arr[index]==val)
		break;		
	}
if(index==10)
{
	printf("Not Present");
}
else
{
	printf("Present\nAnd Indexing is:%d",index);
}
}
