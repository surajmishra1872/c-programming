//Write a program to search an element in the given list of n numbers using linear search.
#include<stdio.h>
void main()
{
	int arr[100],i,j,n,search,count=0;
	printf("Enter size of Number Input:");
	scanf("%d",&n);
	printf("\nEnter Array Elements:\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);	
	}
	printf("Enter Number for serching:");
	scanf("%d",&search);
	for(j=0;j<n;j++)
	{
		if(search!=arr[j])
		count++;
	}
	if(count==10)
	printf("Not found\n");
	if(count!=10)
	printf("Found");
}
