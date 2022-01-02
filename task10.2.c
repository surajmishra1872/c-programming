/*
Wap to following UDF
Int checkpolindrome(int num); retrun 0 if palindrome and 1 if not palindrome
*/
#include<stdio.h>
int checkpolindrome(int num)	
{
	int i,sum=0,rem;
for(i=num;i>0;i=i/10)
{
 	rem=i%10;
	sum=sum*10+rem;	
}
if(sum==num)
return 0;
else
return 1;	
}

void main()
{
int num,res;
printf("Enter a Number To check pelindrome:");
scanf("%d",&num);
res=checkpolindrome(num);
printf("Number is Pelindrome:%d",res);
	
}
