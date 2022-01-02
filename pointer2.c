//swap without third number using pointer
#include<stdio.h>
void swap(int*,int*);
void main()
{
	int a,b;
	printf("Enter a First Number:");
	scanf("%d",&a);
	printf("Enter a Second Number:");
	scanf("%d",&b);
	printf("\nNumbers before swapping is a=%d,b=%d",a,b);
	swap(&a,&b);
	printf("\nNumbers after swapping is a=%d,b=%d",a,b);
}
void swap(int *x,int *y)
{
	*x=*x+*y;
	*y=*x-*y;
	*x=*x-*y;
}
