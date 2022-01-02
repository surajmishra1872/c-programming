/*
Wap to convert ruppes to paisa
int convert()
*/
#include<stdio.h>
int convert()
{
	int rp,ps;
	printf("Enter Rupee Value:");
	scanf("%d",&rp);
	ps=rp*100;
	return ps;
}
void main()
{
printf("Rupee to paisa value is:%d",convert());	
}
