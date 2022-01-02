/*
Wap to convert ruppes to paisa
Void convert()
*/


#include<stdio.h>
void convert()
{
	int rp,ps;
	printf("Enter Rupee Value:");
	scanf("%d",&rp);
	ps=rp*100;
	printf("Rupee to paisa value is:%d",ps);	
}
void main()
{
convert();	
}
