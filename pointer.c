//swap using pointer
#include<stdio.h>
void main()
{
	int a=4,b=5,*j=&a,*k=&b;
	printf("Values before swapping is, a=%d,b=%d",*j,*k);
	*j=*j+*k;
	*k=*j-*k;
	*j=*j-*k;
	printf("\nValues after swapping is , a=%d,b=%d",*j,*k);
	
}
