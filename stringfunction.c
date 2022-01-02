//wap to inputb first name and last name of the user and printf full name where first name is
// in uppercase and lastname is in lowercase.
#include<stdio.h>
void main()
{
	char fname[100],lname[100];
	printf("Enter Your first name:");
	gets(fname);
	printf("Enter Your last name:");
	gets(lname);
	strupr(fname);
	strlwr(lname);
	strcat(fname,lname);
	printf("Your full name is:%s",fname);
}
