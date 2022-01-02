//wap to input m for male and f for female and print the gender like male of female
#include<stdio.h>
int main()
{
	char a;
	printf("Enter your gender in shortcut:");
	scanf("%c",&a);
	//a=='f'?printf("Gender is female"):(a=='m')?printf("Gender is Male"):printf("You input Invalid Gender");
    a=='f'?printf("Gender is female"):(a!='m'&& a!='f')?printf("You are invalid"):printf("You Gender is Male");

}
