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
	switch()
	{
		case 'c':
			printf("Enter radius of circle:");
			scanf("%f",&r);
			printf("\nArea of circle is:%f",pi*r*r);
			break;
		case 't':
			printf("Enter Height of Triangle:");
			scanf("%f",&h);
			printf("Enter base of Triangle:");
			scanf("%f",&b);
			printf("\nArea of Triangle is:%f",(h*b)/2);
			break;
		case 'r':
			printf("Enter Width of Rectangle:");
			scanf("%f",&w);
			printf("Enter lenght of Reactangle:");
			scanf("%f",&b);
			printf("\nArea of Recatnge is:%f",w*l);
			break;
		default:
			printf("Can not Calculate.");
	}
	
}
