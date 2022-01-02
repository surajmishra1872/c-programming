//takes something return something
#include<stdio.h>
int add(int,int);
int main()
{
	int a,b,d;
	printf("Enter two numbers for Substraction:");
	scanf("%d %d",&a,&b);
	d=add(a,b);
	printf("Addition is:%d",d);
}
int add(int x,int y)
{
	int c;
	c=x-y;
	return (c);
}
