//Find First and Last Position of Element in Sorted Array
#include<stdio.h>
void main()
{
	int a[10]={3,1,2,5,4,6,8,7,9,10},i,j;
	for(i=0;i<=9;i++)
	{
		if(a[i]>a[i+1])
		{
			a[i]=a[i+1];
		}
	}
	for(i=0;i<=9;i++)
	{
	printf("%d",a[i]);
}
	 
}
