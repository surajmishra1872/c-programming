//Write a program to display even number between 1 to 50.
#include<stdio.h>
void main()
{
	int a,b,res;
	for(a=1;a<=50;a++)
	{
		if(a%2==0)
		{
			printf("%d\n",a);
		}
	}
}
