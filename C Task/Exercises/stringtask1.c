 #include<stdio.h>
#include<string.h>
void main()
{
int a;
char name[100],rev[100];
printf("Enter A string:");
gets(name);
strcpy(rev,name);
strrev(name);
a=strcmp(name,rev);
if(a==0)
{
printf("Polindrome");
}
else
{
	printf("Not Polindrome");
}
}
