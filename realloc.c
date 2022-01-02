//calloc
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,*p,i;
	printf("Before Allocation\n");
	printf("Enter a Number:");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
	printf("Enter Element of %d Number is:\n",i);
	scanf("%d",(p+i));
    }
	for(i=0;i<n;i++)
	{
		printf("Element  of %d Number is:%d\n",i,*(p+i));
	}
	printf("\nAfter Realloc Memory .\n");
	printf("Enter a Number:");
	scanf("%d",&n);
	p=realloc(p,n*sizeof(int));
	for(i=0;i<n;i++)
	{
	printf("Enter Element of :%d Number:\n",i);
	scanf("%d",(p+i));
    }
	for(i=0;i<n;i++)
	{
		printf("Element  of %d Number is:%d\n",i,*(p+i));
	}
}
