//wap to input all elements of a 3*3 matrix and print all values in matrix form.
#include<stdio.h>
void main()
{
	int arr[3][3],i,j;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
		printf("The value of matrix is:\n");
		for(j=0;j<=2;j++)
		{
			for(i=0;i<=2;i++)
			{
			printf(" %d  ",arr[j][i]);
		    }
		    printf("\n");
		}
		
	}

