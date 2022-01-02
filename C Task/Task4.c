//wap to input ruppes from the user and find how many notes of 200 and 50 is possible in the amount
#include<stdio.h>
int main()
{
	int a;
	printf("Enter Your Ruppes:");
	scanf("%d",&a);
	printf("Possible Notes of 200 is:%d\n",a/200);
	printf("And Possible Notes of 50 is:%d",a/50);
}
