//swap number
#include<stdio.h>
void main()
{
	int a,b,temp;
	printf("enter a number before swapping\n");
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("before swapping numbera= %d and b =%d",a,b);


}
