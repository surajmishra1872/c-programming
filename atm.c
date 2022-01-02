//Mishra ATM Services
#include<stdio.h>
#include<time.h>
void main()
{   
	int cnum=123,pass=123,count=0;
	int cnumber,choice;
	char exit;
	int balance=125634;
	static amount=0;
	static spass=123;
	time_t tm;
    time(&tm);
	do{
	printf("~~~~~Welcome to Mishra's ATM Prayagraj~~~~~\n");
	step1:;
	printf("\nEnter Your Card Number:\n");
	scanf("%d",&cnumber);
	if(cnumber==cnum)
	{   
	   count++;
		step2:;
		printf("Enter Password:\n");
		scanf("%d",&pass);
		if(pass==spass)
		{    
			system("cls");
			printf("1.Enter 1 For Check Balance:\n");
			printf("2.Enter 2 For Mini Statement Balance:\n");
			printf("3.Enter 3 For Account Deatails:\n");
			printf("4.Enter 4 For Cash Withdrawl:\n");
			printf("5.Enter 5 For Change Password:\n");
			printf("6.Enter 6 for Exit.\n");
			printf("Enter choice:\n");
			scanf("%d",&choice);
			switch(choice)
			{
				case 1:
					system("cls");
					printf("Your Balance is:%d\n",balance-amount);
					break;
				case 2:
					system("cls");
					printf("~~Mishra's Bank Civil Lines Prayagraj\n~~\n\n");
					printf("Date:%s\n",ctime(&tm));
					printf("Your Balance is:%d\n",balance);
					printf("You Enter %d times card in atm.\n",count);
					printf("Account Holder Name:Suraj Mishra\n");
					break;
				case 3:
					system("cls");
					printf("Date:%s\n",ctime(&tm));
					printf("Account Type:Saving\n");
					printf("Account Holder Name:Suraj Mishra\n");
					printf("Account Opening Date is:10/10/2016 \n");
					printf("Branch Name is:Mishra's Bank Civil Lines Prayagraj\n");
					printf("Nommene Name is:Anand Kumar Mishra\n");
					break;
				case 4:
					system("cls");
					printf("~~Mishra's Bank Civil Lines Prayagraj\n~~\n\n");
					printf("Enter Your Cash Amount for Withdrawl:\n");
					scanf("%d",&amount);
					printf("\nCash Withdrawl Successfully");
					break;
				case 5:
					system("cls");
					printf("~~Mishra's Bank Civil Lines Prayagraj\n~~");
					printf("Enter Your New Password:\n");
					scanf("%d",&spass);
					printf("Password Change Successfully/n");
					break;
				case 6:
					goto step3;
				default:
					printf("Sorry!! Invalid Option");
					break;
				
			}
		}
		else
		{
			printf("\nIncorrect Password\n");
			goto step2;
			
		}
	}
	else
	{
		printf("ohh--! Incorrect Card Number.  Enter Again.\n");
		count++;
		goto step1;
	}
step3:;
printf("\nDo You Want to Cancel Banking [y/n]:");
fflush(stdin);
scanf("%c",&exit);
system("cls");
if(exit=='y')
{
	printf("Thank You For Visiting Mishra's Bank ATM. ");
}
}while(exit=='n');
	
}
