/*

# # # # #
$ $ $ $ $
# # # # #
$ $ $ $ $
# # # # #

*/

#include<stdio.h>
void main()
{
	int i,j;
	for(i=5;i>=3;i--)
	{
		for(j=1;j<=5;j++)
		{
			printf("# ");		
		}	
	   printf("\n");
	   for(j=1;j<=5;j++)
		{  
			if(i!=3)
			{
			printf("$ ");
			}
		}
		printf("\n");	
	}
}
