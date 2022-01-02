/*
Wap to convert ruppes to paisa
Void convert(float rupee)
*/
#include<stdio.h>
void convert(float rp)
{
	float ps;
	ps=rp*100;
	printf("Rupee to paisa value is:%.2f",ps);
}
void main()
{
	float rp;
	printf("Enter Rupee Value:");
	scanf("%f",&rp);
	convert(rp);	
}
