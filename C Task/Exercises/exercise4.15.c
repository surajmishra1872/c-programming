//Write a program to find sum of even numbers, count of even 
//numbers, sum of odd numbers and count of odd numbers 
//between 1 to 20.
#include<stdio.h>
void main()
{
	int res1=0,res2=0,i,x=0,y=0;
	for(i=1;i<=10;i++)
	{
		if(i%2==0)
		{
			res1=res1+i;
			x=x+1;
		}

		if(i%2!=0)
		{
		res2=res2+i;
		y=y+1;	
		}
		}
printf("Sum of even number is:%d\n",res1);
printf("Count number even is :%d\n",x);
printf("Sum of odd number is:%d\n",res2);
printf("Count number of odd is :%d\n",y);


}
