//C program to toggle each character of a string. Techpile 
#include<stdio.h>
void main()
{
	char name[100];
	int i,flag;
	printf("Enter Your text");
	gets(name);
	for(i=0;name[i]!='\0';i++)
	if(name[i]>='A' && name[i]<='Z')
	{
    name[i]=name[i]+32;
    }
	else
	{
	name[i]=name[i]-32;
}
printf("string after toggel is:%s",name);

}
