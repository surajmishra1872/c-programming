#include<stdio.h>
int add1()
{
	int a,b;
	printf("Enter Fisrt Number:");
	scanf("%d",&a);
	printf("Enter Second Number:");
	scanf("%d",&b);
	return (a+b);
}
int add2()
{
	int c,res=0;
	printf("Enter one Number:");
	scanf("%d",&c);
	//res=add1()+c;
	return (add1()+c);
}
void main()
{
	int choice;
	printf("for add two number choice is 1 and three numbers choice is 2.\n");
	printf("Enter Your choice:");
	scanf("%d",&choice);
	if(choice==1)
	{
		printf("Sum of two Number is:%d",add1());
	}
	if(choice==2)
	{
		printf("Sum of three Number is:%d",add2());
	}
	
}

