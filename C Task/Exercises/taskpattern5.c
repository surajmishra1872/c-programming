/*
6 6 6 6 6
5 5 5
4 
*/

#include<stdio.h>
void main()
{
	int i,j,n=2;
	for(i=6;i>=4;i--)
	{
		for(j=n;j<=i;j++)
		{
			printf("  %d ",i);
				
		}
		n++;
	printf("\n");	
	}
	

}
