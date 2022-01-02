// takes something return nothing
// in this type of function we use pass actual paarmeter in function when calling
#include<stdio.h>
void add(int,int);
int main()
{
int a,b;
printf("Enter Two Numbers:");
scanf("%d %d",&a,&b);
add(a,b);	
}
void add(int x,int y)
{
	printf("Addition of two number is:%d",x+y);
}

