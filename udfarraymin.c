#include<stdio.h>
int minvalue(int arr[])
{
	int i,g;
	g=arr[0];
	for(i=0;i<=9;i++)
	{
		if(arr[i]<g)
		{
			g=arr[i];
		}
	}
	return g;
}
void main()
{
int a[10],i;
printf("Enter Array Elements of array:");
for(i=0;i<=9;i++)
{
scanf("%d",&a[i]);
}
printf("\nMinimum Value of array is:%d",minvalue(a));	
}
