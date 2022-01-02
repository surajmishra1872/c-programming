// swap using pointer function
#include<stdio.h>
int swap(int*,int*);
void main()
{
	int a,b;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter Second Number:");
	scanf("%d",&b);
	swap(&a,&b);
	printf("\nnon func value of a after swapping is:%d and b is:%d",a,b);
	
}
int swap(int *x,int *y)
{
	int z;
	z=*y;
	*y=*x;
	*x=z;
	printf("\nfunc -value of a after swapping is:%d and b is:%d",*x,*y);
}
