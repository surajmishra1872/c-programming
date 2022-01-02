/*

   		   *
          * *
         * * *
       * * * * *
      * * * * * *
    * * * * * * * *
  * * * * * * * * * *
*/

#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=10-i;j++)
		{
			printf(" ");
		}
	for(k=1;k<=i;k++)
	{
		printf("* ");
	}
	printf("\n");
	}
}
