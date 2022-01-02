//print number like 1,2,3,4,5

#include<stdio.h>
int main()
{
	int a,s;
	printf("Enter A number:");
	scanf("%d",&a);
	number(a);
	
}
int number(int x)
{ 
	printf("%d\n",x);
	if(x<=0)
	{
		return 1;
	}
	else
	{
		number(x-1);
	}
	
	printf("\n \n");
	printf("%d\n",x);

}
