//recursion 2

#include<stdio.h>
void main()
{
	int a,r;
	printf("Enter A number:");
	scanf("%d",&a);
	r=fact(a);
	printf("%d",r);
}

int fact(int x)
{
	if(x==1  || x==0)
	{
		return 1;
	}
	else
	{
		return (x*fact(x-1));
	}
}
