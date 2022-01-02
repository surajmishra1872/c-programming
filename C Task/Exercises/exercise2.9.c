//Write a program to check whether the given character is lowercase alphabet or not.
#include<stdio.h>
void main()
{
	char character;
	printf("Enter a character:");
	character=getche();
	if(character>='a' && character<='a')
	{
		printf("\nEntered Cahracter is in Lowercase.");
	}
	else
	{
	printf("\nEntered Cahracter is not in Lowercase.");	
	}
}
