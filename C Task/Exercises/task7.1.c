//Wap to find table of all numbers from 2 to 10.
#include<stdio.h>
void main()
{   
	int i,j;
	for(i=2;i<=10;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf("%d*%d=%d\t",i,j,i*j);
		}
		printf("\n");
	}
}
