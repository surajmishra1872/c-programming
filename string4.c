//wap to count total accurance of 'a' in your name
#include<stdio.h>
void main()
{
char name[100];
int i,count=0;
printf("Enter Your name:");
gets(name);
for(i=0;name[i]!='\0';i++)
{
	if(name[i]=='a' || name[i]=='A')
	count++;
}
printf("Total numeber of 'a' present is:%d",count);
}
