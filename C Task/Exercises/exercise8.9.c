//wap to input 10 elements and find sum of two sequential elements.
#include<stdio.h>
void main()
{
	int i,a,k,arr1[10],sum=0,arr2[10],g;
	printf("Enter 1st array 10 Elements:");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("\nsum of two sequential elements is:\n");
	for(k=0;k<=8;k=k+2)
	{
	 sum=arr1[k]+arr1[k+1];
	 printf("%d\n",sum);
	 arr2[k]=sum;
    }
g=arr2[0];
for(a=0;a<=9;a=a+2)
{
	if(arr2[a]>g)
	g=arr2[a];
}
printf("Greatest Number is=%d",g);  
}
