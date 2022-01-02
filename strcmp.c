#include<stdio.h>
void main()
{
	char pass[100];
	int res;
	printf("Enter Your Password:");
	gets(pass);
	//res=strcmp(pass,"techpile");
	//res=strncmp(pass,"techpile",4);
	//res=strnicmp(pass,"techpile",4);
	res=strcmpi(pass,"techpile");
	if(res==0)
	printf("Your Welcome.");
	else
	printf("Password is wrong");
	
}
