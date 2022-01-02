//wap to print length of string without using pre-defined function
#include<stdio.h>
void main()
{
char name[100];
int i,count=0;
printf("Enter Your name:");
gets(name);
for(i=0;name[i]!='\0';i++)
{
	count++;
}
printf("Length of string  is:%d",count);
}
