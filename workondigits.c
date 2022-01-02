//work on each digit of number.
// wap to print  digits all digits of number in seprate lines
//wap to print sum of digits of a number
//wap to reverse a number
//wap to check a number is pelindrome or not
//wap to check a number is a armstrong number or not=153=1+125+27=153 this is armstrong 22:4+4=8
//wap to print sumof sqaure of all digits of a number  
#include<stdio.h>
void main()
{
int num,sum=0,rem,count=0;
printf("Enter a 3 digits number:");
scanf("%d",&num);
for(;num>0;num=num/10)

	{
	rem=num%10;
	sum=sum+rem;
	count++;
	}
	printf(" Sum of digits is:%d\n",sum);
	printf("Total Number is :%d\n",count);	
}
