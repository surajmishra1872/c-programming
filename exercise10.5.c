/*
Wap to convert ruppes to paisa
int convert(float rupee)
*/

#include<stdio.h>
int convert(int rp)
{
	float ps;
	ps=rp*100;
	return ps;
}
void main()
{
	int rp;
	printf("Enter Rupee Value:");
	scanf("%d",&rp);
printf("Rupee to paisa value is:%d",convert(rp));	
}
