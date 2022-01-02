//wap to input two number and print addition while user choice is 1
#include<stdio.h>
void main()
{
	int n1,n2,ch;
	do
	{
		printf("Enter two numbers:");
		scanf("%d%d",&n1,&n2);
		printf("additio is:%d\n",(n1+n2));
		printf("do you again want to add:");
		scanf("%d",&ch);
	}while(ch==1);
}
