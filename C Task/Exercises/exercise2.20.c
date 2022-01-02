//Write a program using a switch statement to check whether
// a number given by the user is odd or even.
#include<stdio.h>
void main()
{
	int a,res;
	printf("Enter A Number:");
	scanf("%d",&a);
	res=a%2==0;
    switch(res)
    {
	case 1:
		printf("Yes number is EVEN.");
		break;
	case 0:
		printf("Number is Odd.");
		break;
	default:
		printf("Invalid");
		
}
}
