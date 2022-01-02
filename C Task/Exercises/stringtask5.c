//WAP to input name from user and print name with hello .
// all username letters should be small case.
#include<stdio.h>
#include<string.h>
void main()
{
	char username[100], wel[100]="Hello \t";
	printf("Enter User Name:");
	gets(username);
	strlwr(username);
	strcat(wel,username);
	printf("%s",wel);
}
