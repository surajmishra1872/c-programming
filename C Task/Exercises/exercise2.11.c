//Write a program to check the given character is alphabet or not.
#include<stdio.h>
void main()
{
	char character;
	printf("Enter a character:");
	character=getche();
	if(character>='A' && character<='Z' ||character>='a' && character<='z')
	{
		printf("\nYess... ! Entered Cahracter is Alphabate.");
	}
	else
	{
	printf("\nOhh...!! Entered Cahracter is not Alphabate.");	
	}
}
