//wap to find area of circle by using udf.
#include<stdio.h>
void area(float a)
{
	printf("Area of circle is:%.2f",3.14*(a*a));
}
void main()
{
float r;
printf("Enter radius of circle:");
scanf("%f",&r);
area(r);
}
