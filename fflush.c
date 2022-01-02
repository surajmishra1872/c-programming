//wap to input first character of gender in(m/f) of 10 student and count how many males /females
//fflush ka use karne se koi input skip nhi hota hai
#include<stdio.h>
void main()
{
	char gen;
	int i,m=0,f=0;
	for(i=1;i<=10;i++)
	{
	printf("enter gender first character(m/f):");
	scanf("%c",&gen);
	fflush(stdin);
	if(gen=='m')
	m=m+1;
	else if(gen=='f')
	f=f+1;
	
}
}
