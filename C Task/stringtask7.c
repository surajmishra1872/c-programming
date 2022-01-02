//wap to input your name and print all word of name in new lines
#include<stdio.h>
void main()
{
	char name[100];
	int i,j;
	step1:;
	printf("Enter Your Name:");
	gets(name);
	if(name[0]!=' ')
	{
	for(i=0;name[i]!=' ';i++)
	{
		printf("%c",name[i]);
	}
	printf("\n");
	for(j=i;name[j]!='\0';j++)
	{
		printf("%c",name[j]);
	}
	
	}
	else{
		printf("not acceptable space at first character.\n");
		goto step1;
	}
}

