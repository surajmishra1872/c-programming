/*wap to print all numbers of a series by using UDF
voidseries()
*/
#include<stdio.h>
voidseries()
{
	int start ,end,i;
	printf("Enter starting Point:");
	scanf("%d",&start);
	printf("Enter starting Point:");
	scanf("%d",&end);
	for(i=start;i<=end;i++)
	{
		printf("%d\n",i);
	}
}
void main()
{
	voidseries();
}

