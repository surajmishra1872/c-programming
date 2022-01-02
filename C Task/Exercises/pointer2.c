//Level of Pointer.
#include<stdio.h>
void main()
{
	int x,*i,**j,***k,****l;
	printf("Enter a Number:");
	scanf("%d",&x);
	i=&x;
	j=&i;
	k=&j;
	l=&k;
	printf("%d\n",*i);
	printf("%d\n",**j);
	printf("%d\n",***k);
	printf("%d\n",****l);
	
}
