/*Wap to following UDF
Void checkpolindrome(int num);*/
#include<stdio.h>
void checkpolindrome(int num)	
{
	int i,sum=0,rem;
for(i=num;i>0;i=i/10)
{
 	rem=i%10;
	sum=sum*10+rem;	
}
if(sum==num)
printf("Yes number is pelindrome.");
else
printf("Not pelindrome.");	
}

void main()
{
int num;
printf("Enter a Number To check pelindrome:");
scanf("%d",&num);
checkpolindrome(num);
	
}


