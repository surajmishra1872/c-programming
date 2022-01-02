#include<stdio.h>
void main()
{
	int a,b,res=1;
	printf("enter a num");
	scanf("%d",&a,&b);
	while(b!=0)
	{
		res=res*a;
		--b;
	}
	
	printf("power %d",res);
}
