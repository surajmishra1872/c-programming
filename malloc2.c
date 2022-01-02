//malloc
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,*ptr,i;
	printf("Enter Number of Size:");
	scanf("%d",&n);
	ptr=(int)malloc(n*sizeof(int));
	for(i=0;i<5;i++)
	{
	printf("Enter value for %d Number:",i);
	scanf("%d",&ptr[i]);	
	}
	for(i=0;i<5;i++)
	{
	printf("Number of %d is:%d\n",i,ptr[i]);	
	}
	
}
