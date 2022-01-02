/*
           *
          * *
         * * *
       * * * * *
      * * * * * *
    * * * * * * * *
  * * * * * * * * * *
   *  *  *  *  *  *
    *  *  *  *  *
	 *  *  *   *
		 *  *
		   *
*/
#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=1;i<=9;i++)
	{
		for(k=1;k<=10-i;k++)
		{
			printf(" ");
			
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	j=0,k=0,i=0;
	for(i=7;i>=1;i--)
	{
		for(j=8;j>i-1;j--)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf(" *");
		}
		printf("\n");
	}
}
