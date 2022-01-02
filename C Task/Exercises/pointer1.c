//Pointer Paractice 1
#include<stdio.h>
void main()
{
	int a,*j;
	j=&a;
	printf("Enter a Number:");
	scanf("%d",&a);
	printf("Address of varible a in u formate is :%u\n",&a);
	printf("Address of varible a in d formate is :%d\n",&a);
	printf("Address of varible J in d formate is :%d\n",&j);
	printf("Value of a in Pointer formate is :%d\n",**(&j));
}
