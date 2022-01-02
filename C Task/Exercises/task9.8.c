//Write a program to delete an element from the array of n elements at the specified position.
#include<stdio.h>
void main()
{
	int arr[100],i,j,n,index;
	printf("Enter size of Number Input:");
	scanf("%d",&n);
	printf("\nEnter Array Elements:\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);	
	}
	printf("Enter Index Number for Deleteing Number:");
	scanf("%d",&index);
	arr[index]=0;
for(j=0;j<n;j++)
{
	printf("%d",arr[j]);
}
}
