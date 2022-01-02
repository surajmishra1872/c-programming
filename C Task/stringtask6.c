//wap to print sort form of your name.
//ram singh=r.singh
#include<stdio.h>
void main()
{
	char name[100];
	int i,j;
	printf("Enter Your Name:");
	gets(name);
	printf("%c.",name[0]);
	for(i=1;name[i]!='\0';i++)
	{
		if(name[i]==' ' &&name[i+1]!=' ')
		{
			for(j=i+1;name[j]!=0;j++)
			printf("%c",name[j]);
		}
	}
}
