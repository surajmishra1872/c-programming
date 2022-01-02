// if condition
#include<stdio.h>
int main()
{

while(1)
{
	int a;
	printf("\nEnter Your Number:");
	scanf("%d",&a);
	if(a==5)
	{
		printf("You enterd 5");
	}
	if(a<5)
	{
		printf("You Enterd Below than 5");
	}
    if(a==8)
    {
    	break;
	}
}
}
