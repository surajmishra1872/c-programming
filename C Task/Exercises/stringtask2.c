//WAP to input username and password from user and print a message "Welcome To Techpile"  
//if Username is "Techpileuser" and password is "Techpile".
#include<stdio.h>
#include<string.h>
void main()
{
	char user[100];
	char pass[100];
	int a,b;
	printf("Enter Your User Name:");
	gets(user);
	printf("Enter Your Password:");
	gets(pass);
	a=strcmpi(user,"Techpileuser");
	b=strcmpi(pass,"Techpile");
	if(a==0 && b==0)
	{
		printf("Welcome to techpile");
	}
	else
	{
		printf("Your Password or ID is wrong.");
	}
}
