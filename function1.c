//Takes nothing return nothing so we use void data type Udf(user defined function) function
// function
#include<stdio.h>
void add(void); 
void main()
{
	void add(); 
	add();	
}
void add()
{
	int a,b;
	printf("Enter two Numbers:");
	scanf("%d %d",&a,&b);
	printf("Addition of two number is:%d",a+b);
}
