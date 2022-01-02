//7.	Write a program to find product of  n  given numbers.
#include<stdio.h>
void main()
{
	int a,pro=1,x;
	int arr[]={1,2,3,4};
	x=sizeof(arr) / sizeof(arr[0]);
	for(a=0;a<=x-1;a++)
	{
		pro=pro*arr[a];
	}
	printf("Product of Given Number is:%d",pro);
	
}

