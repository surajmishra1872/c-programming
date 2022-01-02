//WAP to input first name and last name of user and print Full name
#include<stdio.h>
#include<string.h>
void main()
{
	char fname[100];
	char lname[100];
	printf("Enter Your First Name:");
	gets(fname);
	printf("Enter Last Name:");
	gets(lname);
	strcat(fname,lname);
	printf("Your Full Name:%s",fname);
	
}
