//Write a program to display odd numbers between 1 to 25.
#include<stdio.h>
void main()
{
	int a,b,res;
	for(a=1;a<=25;a++)
	{
		if(a%2!=0)
		{
			printf("%d\n",a);
		}
	}
}
