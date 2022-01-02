//Pointer in array
#include<stdio.h>
void main()
{
	int i,a[5],*p;
	//p=a;
	//p=&a ;
	//p=&a[0]; 
	for(i=0;i<=4;i++)
	scanf("%d",p+i);

	for(i=0;i<=4;i++)
	{
	printf("%d",*(p+i));
}
printf("\n%d",a[0]);
}
