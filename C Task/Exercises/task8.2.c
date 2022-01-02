//3.	Wap to find smallest number within 10 elements of array.
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
	for(i=0;i<=n-1;i++)
	{
		for(j=1+i;j<=n-1;j++)
		{
			if(arr[i]>arr[j])
			{
				int a;
				a=arr[i];
				arr[i]=arr[j];
				arr[j]=a;
			}
		}
	}
printf("\nGreates Number is:");
for(i=0;i<=n-1;i++)
{   
	if(i==n-1)
	printf("\n%d",arr[i]);
}
}

