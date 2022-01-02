//wap to input your name and apply validation like :not should contain any other symbol
//,should not be less then 3
#include<stdio.h>
#include<string.h>
void main()
{
	char name[100];
	int len,i;
	printf("Enter your name:");
	gets(name); 
	len=strlen(name);
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]>='a' && name[i]<='z'|| name[i]>='A' && name[i]<='Z' && len<3)
		{
			
		}
		else
		{
			printf("invalid\n");
		}
	}
}
