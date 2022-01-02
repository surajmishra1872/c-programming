//wap to print male or female based on m or f
#include<stdio.h>
void main()
{
	char a;
	printf("Enter Your Gender m or f:");
	a=getche();
    switch(a)
	{
		case('m'):
		case('M'):
			printf("\nYour Gender is:MALE");
			break;
		case('f'):
		case('F'):
			printf("\nYour Gender is:FEMALE");
			break;
		default:
			printf("\nInvalid Gender");
	}	
}
