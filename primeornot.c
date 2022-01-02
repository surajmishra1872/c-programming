//check prime or not
#include<stdio.h>
void main()
{
	int a,count=0,i;
	printf("Enter a number:");
	scanf("%d",&a);
	if(a!=1)
	{
	//for(i=2;i<num;i++)
	//for(i=2;i<num;i++)
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		count++;
	}
	if(count==2)//(count==0)
	{
		printf("Number is prime.");
	}
	else
	{
		printf("Number is not Prime.");
	}
}
else if(a==1)
{
	printf("1 is nither prime or not.");
}
}
