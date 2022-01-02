//wap to input three numbers from user and find sum and averag of number

#include<stdio.h>
int main()
{
 float a,b,c;
 printf("Enter Your First Name:");
 scanf("%f",&a);
 printf("Enter Your Second Name:");
 scanf("%f",&b);
 printf("Enter Your Third Name:");
 scanf("%f",&c);
 printf("Sum of Numbers is:%.2f\n",a+b+c);
 printf("Average of numbers is:%.2f\n",(a+b+c)/3);
}
