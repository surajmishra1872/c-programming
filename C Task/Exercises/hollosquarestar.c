/*
*****
*   *
*   *
*   *
*****
*/
#include<stdio.h>
void main()
{
	int i,j,a;
	printf("Enter rows:");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=a;j++)
		{
			if(i==1 ||i==a||j==1||j==a-i+1||i==j||j==a)  
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}printf("\n");
	}
}
