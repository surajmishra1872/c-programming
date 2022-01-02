//Wap to input 5 number from user and count how many numbers are palindrome.
#include<stdio.h>
void main()
{
	int i,j,arr[2],org,sum=0,rem,k,num;
	for(i=0;i<=2;i++)
	{
		printf("Enter %d Number Element:",i);
		scanf("%d",&arr[i]);
	}
	for(j=0;j<=2;j++)
	{
		num=arr[j];
		org=num;
		for(k=num;k>0;k=k/10)
		{
			rem=k%10;
			sum=sum*10+rem;
		}
		if(sum==org)
		{
			printf("%d",num);
			
		}
	}
}
