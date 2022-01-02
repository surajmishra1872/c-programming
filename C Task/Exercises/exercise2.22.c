/*
Input integer centigrade value of temperature and print nature of weather
Centigrade <0 : freezing
Centigrade : 0-10 : very cold
11-40 : Summer
Centigrade > 40 :it is Burning
*/

#include<stdio.h>
void main()
{
	float temp;
	printf("Enter temperature:");
	scanf("%f",&temp);
	if(temp<0)
	{
		printf("Weather is freezing Mode.");
	}
	else if(temp>=0 && temp<=10)
	{
		printf("Very Cold");
	}
	else if(temp>=11 && temp<=40)
	{
		printf("Summer Day");
	}
	else
	{
		printf("Very Hot Day.");
	}
}
