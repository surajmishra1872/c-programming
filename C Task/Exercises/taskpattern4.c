/*
6 6 6 6 6
5 5 5 5
4 4 4
3 3
2
*/
#include<stdio.h>
void main()
{
	int i,j;
	for(i=6;i>=2;i--)
	{
	for(j=2;j<=i;j++)
	{
		printf("%d ",i);
	}
	printf("\n");	
	}
}
