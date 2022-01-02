//wap to input email and apply validation:like should conatin atleastn one @ and.
#include<stdio.h>
void main()
{
	char email[100];
	int i,dot=0,at=0;
	printf("Enter a Email.");
	gets(email);
	for(i=0;email[i]!='\0';i++)
	{
		if(email[i]=='@')
		at=at+1;
		else if(email[i]=='.')
		dot++;
	}
if(dot>=1 && at>=1)
{
printf("This is valid email id.");
}
else
{
printf("This is invalid email id.");
}

}	

