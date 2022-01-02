//wap to print reverse of string
#include<stdio.h>
void main()
{
	char name[5];
	int i;
	printf("Enter your name:");
	gets(name);
	for(i=5;i>=0;i--)
	{
	printf("%c",name[i]);
	}
	}

