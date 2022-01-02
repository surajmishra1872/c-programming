//Write a menu driven program to find area of the circle, 
//area of the triangle and area of the rectangle according to users input choice.
#include<stdio.h>
void main()
{
	float pi=3.14,r,w,l,h,b;
	char shape;
	printf("Enter Shapes Name in Short I.E-circle=c,triangle=t,rectangle=r\n");
	printf("\nEnter Shape Name:");
	shape=getche();
	switch(shape)
	{
		case 'c':
			printf("\nEnter radius of circle:");
			scanf("%f",&r);
			printf("\nArea of circle is:%.2f",pi*r*r);
			break;
		case 't':
			printf("\nEnter Height of Triangle:");
			scanf("%f",&h);
			printf("\nEnter base of Triangle:");
			scanf("%f",&b);
			printf("\nArea of Triangle is:%.2f",(h*b)/2);
			break;
		case 'r':
			printf("\nEnter Width of Rectangle:");
			scanf("%f",&w);
			printf("\nEnter lenght of Reactangle:");
			scanf("%f",&l);
			printf("\nArea of Recatngle is:%.2f",w*l);
			break;
		default:
			printf("Can not Calculate.");
	}
	
}
