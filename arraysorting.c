//greatest number
#include<stdio.h>
void main()
{
 int a[10],i,g=0;
 printf("Enter 10 Elements of array:");
 for(i=0;i<=9;i++)
 {
 	scanf("%d",&a[i]);
 }
 g=a[0];
for(i=0;i<=9;i++)
{
	if(a[i]>g)
	g=a[i];
}
printf("Greatest Number is=%d",g);
}
