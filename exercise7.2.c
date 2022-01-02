//wap to input numbers and print factorial of numbers until user inputes 0 or 1.
#include<stdio.h>
void main()
{
	int num,sum=1;
printf("Enter a number:");
scanf("%d",&num);
for(i=1;i<=num;i++)
{ 
   if(num!=0 || num!=1)
   {
	sum=sum*i;
    } 
	else{
		break;
	} 
}
printf("factorial is :%d",sum);
}
