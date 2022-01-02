//array
#include<stdio.h>
int main()
{
	int a[3],i,c;
	printf("Enter number for array:");
	for(i=0;i<=2;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=2;i++)
	{
		printf("\n \n numbers is:\n");
		printf("%d\n",a[i]);
	}
}
