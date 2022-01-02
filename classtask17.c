//wap to print cube of a number by using UDF
//void cube(int a)
#include<stdio.h>
void cube(int a)
  {

	printf("Cube of number is:%d",a*a*a);
   }

void main()
{
	int num;
	printf("Enter Number For cube:");
	scanf("%d",&num);
	cube(num);
	
}
