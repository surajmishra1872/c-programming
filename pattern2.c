#include<stdio.h>
void main()
{
	int i,j,k,n=10;
	for(i=1;i<=10;i++)
	{
		for(k=1;k<=10-i;k++)
			{
				printf(" ");
			}
			//n--;
		for(j=1;j<=i;j++)
		{	
			printf("* ");
			
		}
		printf("\n");
	}
	
}
