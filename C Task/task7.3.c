//Wap to input 5 number from user and count how many digits are palindrome.
#include<stdio.h>
void main()
{
	int a[5],sum=0,num=0,i,j,k,rem=0,org=0;
	for(i=0;i<=4;i++)
	{
		printf("Enter %d Number Element:",i);
		scanf("%d",&a[i]);
	}
	for(j=0;j<=4;j++)
	{ 
		num=a[j];
		org=num;
	for(k=num;k>0;k=k/10)
	{   
		rem=k%10;
		sum=sum*10+rem;
		
	}
	
	if(sum==org)
		{
			printf("Pelindrome Number Is:%d\n",org);	
		}
	else
	{
		printf("Number is not pelindrome.");
	}
	}
	}


