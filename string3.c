//wap to input your name and print all character of your name in separate lines 
#include<stdio.h>
void main()
{
	char name[50];
	int i;
	printf("Enter your name:");
	gets(name);
	i=0;
	while(name[i]!='\0')
	{
		printf("%c\n",name[i]);
		i++;
	}
}
