//short an array
#include<stdio.h>
void main()
{
	int n,i,j;
	printf("Enter size of an Array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter array Elements.");
    for(i=0;i<=n-1;i++)
    {
     	scanf("%d",&arr[i]);
	}
	printf("\nNumbers Before Shorting Is:");
	for(i=0;i<=n-1;i++)
    {
     	printf("%d",arr[i]);
	}
	for(i=0;i<=n-1;i++)
	{
		for(j=1+i;j<=n-1;j++)
		{
		if(arr[i]>arr[i+1])
			{
				int a;
				a=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=a;
			}
		}
	}
printf("\nNumbers after shorting is:");
for(i=0;i<=n-1;i++)
{
	printf("\n%d",arr[i]);
}
}

