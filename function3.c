//takes nothing return something
#include<stdio.h>
int add();
int main()
{
	//int a=add();
	printf("Sum of number is:%d",add());
}
int add()
{
	int a,b;
	printf("Enter Two Number:");
	scanf("%d %d",&a,&b);
	return (a+b);
}
