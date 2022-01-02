//wap to count total word present in a string
#include<stdio.h>
void main()
{
char name[100];
int i,count=0;
printf("Enter Your name:");
gets(name);
for(i=0;name[i]!='\0';i++)
{
	if(name[i]==' ')
	count++;
}
printf("Total word is :%d",count+1);
}
