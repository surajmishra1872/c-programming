//goto funcion
//wap to input a number and print number is even or odd till user input a neg number
#include<stdio.h>
void main()
{
	int num;
	start:
	printf("Enter a Number:");
	scanf("%d",&num);
	if(num<0)
	goto end;
	if(num%2==0)
	printf("Even Number\n");
	else
	printf("Odd Numbers\n");
	goto start;
	end:
		printf("");
}
