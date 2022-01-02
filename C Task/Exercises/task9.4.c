//Write a program to find the count of positive numbers, 
//negative numbers and zeros in the given list of n numbers.

#include<stdio.h>
void main()
{
	int arr[100],i,j,k,n,sum=0,countp,countn,countz;
	printf("Enter size of Number Input:");
	scanf("%d",&n);
	printf("\nEnter Array Elements:\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);	
	}
	for(k=0;k<n;k++)
	{
		if(arr[k]>0)
		{
		countp++;
	    }
	    if(arr[k]<0)
		{
		countn++;
	    }
	    if(arr[k]==0)
		{
		countz++;
	    }
	}
printf("Total Number of Positive Number is:%d\n",countp);
printf("Total Number of Negative Number is:%d\n",countn);
printf("Total Number of Zero Number is:%d",countz);
}
