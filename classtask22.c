/*wap to print all numbers of a series by using UDF
voidseries(int start,int end)
*/
#include<stdio.h>
voidseries(int start,int end)
{
     int i;	
	for(i=start;i<=end;i++)
	{
		printf("%d\n",i);
	}
}
void main()
{
	int start ,end,i;
	printf("Enter starting Point:");
	scanf("%d",&start);
	printf("Enter starting Point:");
	scanf("%d",&end);  
    voidseries(start,end);
}

