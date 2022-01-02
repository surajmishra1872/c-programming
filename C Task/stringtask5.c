//wap to print sort form of your name.
#include<stdio.h>
void main()
{
	char name[100];
	int i;
	printf("Enter Your Name:");
	gets(name);
	printf("%c.",name[0]);
	for(i=1;name[i]!='\0';i++)
	{
		if(name[i]==' ' &&name[i+1]!=' ')
		{
			printf("%c.",name[i+1]);
		}
	}
}
