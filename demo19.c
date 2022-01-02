//wap a program to print cube of numbers if number is positive
#include<stdio.h>
int main()
{ 
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	if(a<0)
	{
		printf("can not be Cube this number");
	}
	if(a>0)
	{  int b;
		printf("Cube is:%d",b=a*a*a);
	}
}
