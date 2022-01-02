//pelindrome or not
#include<stdio.h>
void main()
{
	int num,sum=0,rem,org=0;
	printf("enter a number:");
	scanf("%d",&num);
	org=num;
	while(num>0)
	{
		rem=num%10;//get remender give last digit 1%10=1
		sum=sum*10+rem;
		num=num/10;//delete last digit responsible for running loop
		
	}
if(org==sum)
{
	printf("Number is Polindrome number.");
}
else
{
	printf("Number is not Polindrome Number.");
}
}
