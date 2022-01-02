//wap to input a 3*3 matrix and check given matrix is identity matrix or not.
#include<stdio.h>
void main()
{
	int m[3][3],i,j,tem=0;
	printf("Enter all 9 element of array:");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		scanf("%d",&m[i][j]);
		}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			if(i==j && m[i][j]!=1)
			{
				temp=1;
			}
			else 
			{
			if(m[i][j]!=0)
			temp=1;
		}
		}
	}
}

