//Write a program to evaluate student result 
//by reading marks in three subjects from user.(Pass or Fail)

#include<stdio.h>
void main()
{
	float sub1,sub2,sub3,percentage,x;
	printf("Enter First Subject Number:");
	scanf("%f",&sub1);
	printf("\nEnter Second Subject Number:");
	scanf("%f",&sub2);
	printf("\nEnter Third Subject Number:");
	scanf("%f",&sub3);
	percentage=(sub1+sub2+sub3)*100/300;
	
	if(percentage>=33.00)
	{
	printf("You Passed With: %.2f Percentage",percentage);
   }
   else
   {
   	printf("You Failed With: %.2f Percentage",percentage);
   }
}
