//wap to input number from user while user choice is 1 and print sum of all number
#include<stdio.h>
void main()
{
	int n1,n2,ch;
	static sum=0;
	do
	{
		printf("Enter two numbers:");
		scanf("%d",&n1);
		sum+=n1;
		printf("do you again want to add:");
		scanf("%d",&ch);
	}while(ch==1);
	printf("%d\n",sum);
}
