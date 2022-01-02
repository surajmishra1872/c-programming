//function
#include<stdio.h>
int input()
{
	int a,b;
	printf("Enter two Numbers:");
	scanf("%d%d",&a,&b);
	return a,b;
}
void main()
{
int x,y;
x,y=input();
printf("X=%d\nY=%d",x,y);	
}
