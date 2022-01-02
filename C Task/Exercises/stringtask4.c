//WAP to input userid from the user and print "Welcome to techpile" 
//if first 8 characters of string is techpile.
#include<stdio.h>
#include<string.h>
void main()
{
	char userid[100];
	int a;
	printf("Enter UserID:");
	gets(userid);
	a=strnicmp(userid,"techpile",8);
	if(a==0)
	{
		printf("Welcome to techpile");
	}
	else
	{
		printf("Enter ID is Incorrect");
	}
	
}
