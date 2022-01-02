//wap to change value of a variable by square of variable by using  UDF.
#include<stdio.h>
void square(int *j)
{
	*j=(*j)*(*j);
}
void main()
{
	int a;
	printf("Enter a Number:");
	scanf("%d",&a);
	square(&a);
	printf("Square of number is:%d",a);
	
}
