/*
A
B B
C C C
D D D D

*/
#include<stdio.h>
void main()
{
	int i,j;
	
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c ",65+i);				
		}	
	   printf("\n");
	   	
	}
}
