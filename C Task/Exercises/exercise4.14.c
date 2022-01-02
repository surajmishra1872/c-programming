//Write a program to display odd numbers between the given range.
#include<stdio.h>
void main()
{
	int a,x,y,res;
	printf("Enter  Starting Number:");
	scanf("%d",&x);
	printf("Enter  Ending Number:");
	scanf("%d",&y);
	for(a=x;a<=y;a++)
	{
		if(a%2!=0)
		{
			printf("%d\n",a);
		}
	}
}

