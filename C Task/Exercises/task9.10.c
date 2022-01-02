//Write a program to find sum of square of elements in a given matrix.
#include<stdio.h>
void main()
{
	int i,j,sum=0,k,l,arr[3][3];
	for(i=0;i<3;i++)
	{
		printf("Enter %d row values:\n",i);
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Sum of square of elements is:\n");
	for(k=0;k<3;k++)
	{
		for(l=0;l<3;l++)
		{
		sum=sum+(arr[k][l]*arr[k][l]);
		}
	}
printf("%d",sum);
} 
