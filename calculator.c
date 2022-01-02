//Wap in c show choice in odd loops and menu driven program
#include<stdio.h>

void main()
{
int choice,num1,num2;
char exit;
do{

printf("~~~~~Menu Wise Calculator~~~~~\n");
printf("1. For Addition Press 1\n");
printf("2. For Substraction Press 2\n");
printf("3. For Division Press 3\n");
printf("4. For Multiplication Press 4\n");
printf("Press Option:");
scanf("%d\N",&choice);
switch(choice)
{
case 1:
system("cls");
printf("Enter Number 1st:");
scanf("%d",&num1);
printf("Enter Number 2nd:");
scanf("%d",&num2);	
printf("Sum of Number is :%d",num1+num2);
break;

case 2:
system("cls");
printf("Enter Number 1st:");
scanf("%d",&num1);
printf("Enter Number 2nd:");
scanf("%d",&num2);	
printf("Substraction of Number is :%d",num1-num2);
break;	

case 3:
system("cls");
printf("Enter Number 1st:");
scanf("%d",&num1);
printf("Enter Number 2nd:");
scanf("%d",&num2);	
printf("Division of Number is :%d",num1/num2);
break;

case 4:
system("cls");
printf("Enter Number 1st:");
scanf("%d",&num1);
printf("Enter Number 2nd:");
scanf("%d",&num2);	
printf("Multiplication of Number is :%d",num1*num2);
break;

default:
	printf("Invalid Choice.\n");
	break;
}
printf("\nDo you want to exit[Y/N]:");
fflush(stdin);
scanf("%c",&exit);
system("cls");
}while (exit=='N');
}
