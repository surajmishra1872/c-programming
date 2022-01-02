//Write a program to find the sum and count of even and
// odd numbers in the given list of n number.
#include<stdio.h>
void main()
{
	int arr[100],i,k,n,sume=0,sumo=0,counto=0,counte=0;
	printf("Enter size of Number Input:");
	scanf("%d",&n);
	printf("\nEnter Array Elements:\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);	
	}
	for(k=0;k<n;k++)
	{
		if(arr[k]%2==0)
		{
		sume=sume+arr[k];
		counte++;
	    }
	    if(arr[k]%2!=0)
		{
		sumo=sumo+arr[k];
		counto++;
	    }
	    
	}
printf("Sum of Even Number is:%d\n",sume);
printf("Sum of Odd Number is:%d\n",sumo);
printf("Total Number of Even Number is:%d\n",counte);
printf("Total Number of Odd Number is:%d\n",counto);
}
