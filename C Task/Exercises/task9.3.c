//Write a program to find maximum and minimum in the given list of n numbers

#include<stdio.h>
void main()
{
	int arr[100],i,j,k,n,sum=0,temp,index;
	printf("Enter size of Number Input:");
	scanf("%d",&n);
	index=n;
	printf("\nEnter Array Elements:\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);	
	}
	for(j=0;j<n;j++)
	{
		for(k=j+1;k<n;k++)
		{
		  if(arr[j]>arr[k])
		  {
		  	  temp=arr[j];
			  arr[j]=arr[k];
			  arr[k]=temp;		
			  }	
		}	
	}
printf("Greatest Number is:%d",arr[n-1]);
printf("\nSmallest Number is:%d",arr[0]);
	
}
