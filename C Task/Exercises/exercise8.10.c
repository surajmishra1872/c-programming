//wap to input 10 elements on two array and find sum of both arrays.
#include<stdio.h>
void main()
{
	int i ,j,k,arr1[9],arr2[9],sum=0;
	printf("Enter 1st array 10 Elements:");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("\nEnter 2nd array 10 Elements:");
	for(j=0;j<=9;j++)
	{
		scanf("%d",&arr2[j]);
	}
	printf("\nSum of two array is:");
	for(k=0;k<=9;k++)
	{
	 sum=sum+(arr1[k]+arr2[k]);
    }
    printf("%d",sum);
}

