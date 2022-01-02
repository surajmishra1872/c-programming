#include<stdio.h>
void main()
{
	int i,j,n=4;
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3-i;j++)
		{
			printf(" %d",n);
		}
		n--;
		printf("\n");
	}
}

