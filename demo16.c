//wap to calculate simple interest value:(principle amount*rate*time)/100
#include<stdio.h>
void main()
{
	const int val=100;// val is the constant
	float pa,rate,time;
	printf("Enter principle amount:");
	scanf("%f",&pa);
	printf("Enter rate of interst:");
	scanf("%f",&rate);
	printf("Enter time of interest:");
	scanf("%f",&time);
	printf("Total Simple interest is:%.2f",(pa*rate*time)/100);
}
