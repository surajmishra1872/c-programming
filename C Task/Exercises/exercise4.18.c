//Write a program to display nth multiplication table.
#include<stdio.h>
void main()
{
	int a,i;
	printf("Enter A Number for table:");
	scanf("%d",&a);
	for(i=0;i<=a;i++)
	{
	printf("%d * %d=%d\n",a,i,i*a);	
	}
}
