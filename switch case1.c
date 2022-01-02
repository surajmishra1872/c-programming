// wap to input a number of day and print name of day.
#include<stdio.h>
void main()
{
	int day;
	printf("Enter a number of day:");
	scanf("%d",&day);
	switch(day)
	{
	case(1):
	printf("This is Monday");
	break;	
	case(2):
	printf("This is Tuesday");
	break;	
	case(3):
	printf("This is Wednesday");
	break;	
	case(4):
	printf("This is  Thrusday");
	break;	
	case(5):
	printf("This is Friday");
	break;	
	case(6):
	printf("This is Saturday");
	break;
	case(7):
	printf("This is Sunday");
	break;
	default:
	printf("No  Day in a week");	
	}
}
