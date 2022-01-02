//Write a program to check whether the given character uppercase alphabet or not.
#include<stdio.h>
void main()
{
	char character;
	printf("Enter a character:");
	character=getche();
	if(character>='A' && character<='Z')
	{
		printf("\nEntered Cahracter is in Uppercase.");
	}
	else
	{
	printf("\nEntered Cahracter is not in Uppercase.");	
	}
}
