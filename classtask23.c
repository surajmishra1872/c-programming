//wap to count all even number within a series
//voidseries()

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
	    if(i%2==0)
		printf("%d\n",i);
	}
}
void main()
{
	voidseries();
}



