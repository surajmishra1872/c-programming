//Write a program to find subtraction of two given matrices.
#include<stdio.h>
void main()
{
	int i,j,sum=0,k,l,arr1[3][3],arr2[3][3],arr3[3][3];
	printf("Enter 1st Matrix Value:\n");
	for(i=0;i<3;i++)
	{
		printf("Enter %d row values:\n",i);
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("Enter 2nd Matrix Value:\n");
	for(i=0;i<3;i++)
	{
		printf("Enter %d row values:\n",i);
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	}
	printf("subtraction of two given matrices:\n");
	for(k=0;k<3;k++)
	{
		for(l=0;l<3;l++)
		{
		arr3[k][l]=(arr1[k][l]-arr2[k][l]);
		}
	}
for(k=0;k<3;k++)
	{
		for(l=0;l<3;l++)
		{
		printf("%d  ",arr3[k][l]);
		}
		printf("\n");
	}

} 
