//wap to input a character and print character in uppercase 
//if the inputed value is a alphabate and in lowercase 

#include<stdio.h>
void main()
{
	char ch;
	printf("Enter Lowercase Character:");
	ch=getche();
if((ch>='a' && ch<='z') || (ch>='A' && ch<='z'))
	{
	if(ch>='a' && ch<='z')
	{
	ch=ch-32;
	printf("\nCharacter in upercase is:%c",ch);
    }
    else
    {
	printf("\nCharacter is already in uppercase");	
	}
}
else
{
	printf("\nCharacter is not alphabate.can not be converted in uppercase");
}
}

