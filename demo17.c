//Static variables

#include<stdio.h>
void main()
{
	printValue();
	printValue();
	printValue();
}
void printValue()
{
	static int a=0;
	a=a+10;
	printf("\n Value = %d",a);
}

