#include<stdio.h>
void main()
{
	int n,i,*p;
	printf("Enter a number for memory:");
	scanf("%d",&n);
	p=(int*)calloc(n,sizeof(int));
	/*for(i=0;i<=n;i++)
	{
		printf("Enter %d Number Element:",i);
		scanf("%d",(p+i));
	}
	*/
		for(i=0;i<=2;i++)
	{
		printf("Enter %d Number Element is :%d\n",i,*(p+i));
	
	}
	free(p);
	printf("\nAfter free\n");
	for(i=0;i<=2;i++)
	{
		printf("Enter %d Number Element is :%d\n",i,*(p+i));
	
	}
}
