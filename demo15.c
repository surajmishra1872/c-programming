// wap to check a given number is divisible by 3 and 5 or not
// wap to check a given number is divisible by 3 or 5 or not
// wap to input a number and print "yes it is accepted" when num
// is a positive number and number us completely disisible to 5

#include<stdio.h>
int main()
{ 
 	int a;
	printf("Enter Your Number:");
	scanf("%d",&a);
	!(a>=0 && a%5==0)?printf("yes it is acceptable"):printf("It is not acceptable");
}
