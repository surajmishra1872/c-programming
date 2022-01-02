//wap in c to show if -else together
#include<stdio.h>
void main()
{
	if(10)
	{
		printf("If is Executing\n");
		goto else_block;
	}
	else
	{   else_block:;
		printf("Else is Executing");
	}
}
