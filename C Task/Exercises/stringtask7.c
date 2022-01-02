//C program to count digits, spaces, special characters, alphabets in a string.
#include<stdio.h>
#include<string.h>
void main()
{
	int dcount=0,scount=0,sccount=0,alcount=0;
	char str[100];
	int i;
	printf("Enter Your String:");
	gets(str);
	printf("%d\n",strlen(str));
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='0' && str[i]<='9')
		{
			dcount++;
		}
		else if(str[i]==' ')
		{
			scount++;
		}
		else if(str[i]>='A' && str[i]<='Z' ||str[i]>='a' && str[i]<='z' )
		{
			alcount++;
		}
		else
		{
			sccount++;
			
		}
	}
	printf("Total Number of alphabates is:%d \n digits is:%d \n space is:%d \n specila character is:%d",alcount,dcount,scount,sccount);
}
