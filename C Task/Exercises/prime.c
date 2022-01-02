//prime or not
#include<stdio.h>
void main()
{
	int a,i;
	printf("ENTER NUMBER FOR CHECK PRIME OR NOT:");
	scanf("%d",&a);
	if(a==0 || a==1)
	{
		printf("Number is niether prime or Not.");
	}
	else
	{
		for(i=2;i<=a-1;i++)
		{
			if(a%i==0)
			 {
			 break;
		     }
		}
		if(i==a)
		{
			printf("Number is Prime.");
		}
		else
		{
			printf("Number is not Prime.");
		}
	}
	
}
