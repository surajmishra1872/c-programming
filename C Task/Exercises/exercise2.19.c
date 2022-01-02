//Write a program that checks whether a character entered by the user is a vowel or not.
#include<stdio.h>
void main()
{
	char character;
	printf("Enter A Character:");
	character=getche();
	//character=character+32;
	switch(character)
	{
		case 'a':
			printf("\nYes this is Vovel.");
			break;
		case 'e':
			printf("\nYes this is Vovel.");
			break;
		case 'i':
			printf("\nYes this is Vovel.");
			break;
		case 'o':
			printf("\nYes this is Vovel.");
			break;
		case 'u':
			printf("\nYes this is Vovel.");
			break;
		default:
			printf("\nCharacter is not Vovel.");
	}
}
