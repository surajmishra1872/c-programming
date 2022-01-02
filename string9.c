//wap to enter your name and name should be three character
#include<stdio.h>
void main()
{
	char name[100];
	int len;
	printf("Enter your name:");
	gets(name); 
	len=strlen(name);
	printf("Total character in string is:%d",len);
	if(len<3)
	printf("\nName should have at least three character");
	else
	{
		printf("\nName should not have at least three character");	
	}
}
