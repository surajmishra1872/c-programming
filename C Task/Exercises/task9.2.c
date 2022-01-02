//Write a program to find total and average of n given numbers and find 
//the numbers which are greater than the average.
#include<stdio.h>
void main()
{
	int arr[100],i,j,k,n,sum=0;
	printf("Enter size of Number Input:");
	scanf("%d",&n);
	printf("\nEnter Array Elements:\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);	
	}
	for(j=0;j<n;j++)
	{
		sum=sum+arr[j];	
	}
	printf("\nSum of Numbers is:%d",sum);
	printf("\nAverage of Numbers is:%d",sum/n);
	printf("\nNumbers which are greater than the average is:\n");
	for(k=0;k<n;k++)
	{
		if((sum/n)<arr[k])
		{
		printf("%d\n",arr[k]);
	    }
	}
}
