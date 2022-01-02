//9)	Wap to ask to input input gender first character(m/f) from 
//10 user and count how many females and how many males are present here.
#include<stdio.h>
void main()
{
	char gen;
	int mcount=0,fcount=0,i;
	printf("Enter 10 Gender:");
	for(i=1;i<=10;i++)
	{
	scanf("\n%c",&gen);
	if(gen=='m')
	{
		mcount++;
	}
	else
	{
		fcount++;
	}
    }
printf("Total Number of Male Gender:%d",mcount);
printf("\nTotal Number of Female Gender:%d",fcount); 
	
	
}
