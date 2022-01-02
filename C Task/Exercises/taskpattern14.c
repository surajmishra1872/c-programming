/*
* * * * *
* *   * *
*       *
*/
#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=1;i<=3;i++)
	{
		for(j=5;j>=1;j--)
		{
			for(k=1;k<=i;k++)
			{
				printf("*");	
			}
		}
	}
}
