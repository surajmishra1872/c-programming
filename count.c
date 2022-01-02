//wap to read 5 values from user and count count total positive and negative number present
#include<stdio.h>
void main()
{
	int i,countneg=0,countpos,a;
	printf("Enter Five values:");
	for(i=1;i<=5;i++)
	{
		scanf("\n%d",&a);
		if(a<0)
		{
			countneg++;
		}
		else
		{
			countpos++;
		}
	}
	printf("Total Number of Positive Number is:%d",countpos);
	printf("\nTotal Number of Negative Number is:%d",countneg);
	
}
