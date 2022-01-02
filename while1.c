//wap to print given series :- 5,8,13,20
#include<stdio.h>
void main()
{
	int i=5,n=1;
	while(i<=20)
	{
		printf("%d\n",i);
		n=n+2;
		i=i+n;
	}
}
