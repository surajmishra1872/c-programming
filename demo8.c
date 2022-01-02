//wap to check larger number within two number using ternary operator
//two number->condition -> n1>n2 :"First is grater"

#include<stdio.h>
void main()
{
	int n1,n2;
	printf("Please enter 2 numbers:");
	scanf("%d %d",&n1,&n2);
	n2<n1?printf("n1 is greater than n2"):printf("n2 is greater than n1");
}
