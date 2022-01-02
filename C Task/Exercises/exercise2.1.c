//wap to find maximum number in given three numbers
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter Three Numbers:");
	scanf("%d %d %d",&a,&b,&c);
	if(a<b && b>c)
	{
		printf("%d is greater number. ",b);
	}
	else if(a>c)
	{
		printf("%d is greater number.",a);
	}
	else
	{
		printf("%d is greater number.",c);
	}
}
