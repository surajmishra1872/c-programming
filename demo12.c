//for the condtion all non-zero values are true,0 is false always
#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	a?printf("True Statement"):printf("false statement");
}
