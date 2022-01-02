//ladder if else program
/*
wap to check result status of student based on the percentage but result should not be pass or fail.
0-32 :fail
33-44:Third division
45-59-second division
60-100-First Division
*/

#include<stdio.h>
void main()
{
	float per;
	printf("Enter Your Percentage:");
	scanf("%f",&per);
	
	if(per>=0 && per<=32)
	{
		printf("! You are failed ! \n Samhal jao nhi to papa ko phone kar dunga.");
	}
	
	else if(per>=33 && per<=34)
	{
		printf("! You are passed with third division \Please Focus on your study !");
	}
	else if(per>=45 && per<=59)
	{
		printf("! You are Second division !\ Work Hard beta");
	}
	
	else if(per>=60 && per<=100)
	{
		printf("Congratulation ! You are First division !");
	}
	else
	{
		printf("Ye kya Input Kar rhe ho ye sab yha nhi chalta :{ Dusra Number input karo.");
	}
}
