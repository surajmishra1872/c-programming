//pass or fail with if else statement
//only check if percatage is >=0 or <=100
#include<stdio.h>
void main()
{
	float per;
	printf("Enter Your Percenteg:");
	scanf("%f",&per);
if(per>=0 && per<=100)
{

	if(per>=33)
	{
		printf("Congratulation !! You are passed.");
	}
  else
   {
	printf("Soory! You are failed.");
}
}
else
{
	printf("You Enterd Invalid input.");
}
}
