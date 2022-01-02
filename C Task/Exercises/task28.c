//Write a program to find sum of cubes of three given numbers.
#include<stdio.h>
void main()
{
	int a,b ,c,d;
	printf("Enter Three numbers:");
	scanf("%d %d %d",&a,&b,&c);
	d=a*a*a+b*b*b+c*c*c;
	printf("Sum of Cube is:%d",d);
}
