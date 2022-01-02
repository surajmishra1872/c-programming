//Write a program to find the sum of positive numbers and 
//negative numbers in the given list of n numbers

#include<stdio.h>
void main()
{
	int arr[100],i,k,n,sum=0,sump,sumn,sumz;
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
		sump=sump+arr[k];
	    }
	    if(arr[k]<0)
		{
		sumn=sumn+arr[k];
	    }
	    if(arr[k]==0)
		{
		sumz=sumz+arr[k];
	    }
	}
printf("Sum of Positive Number is:%d\n",sump);
printf("Sum of Negative Number is:%d\n",sumn);
printf("Sum of Zero Number is:%d",sumz);
}
