//wap to print  following statement.
//8,12,17,23,30,38
//7,10,15,22,31,42
//12,11,9,6,2

#include<stdio.h>
void main()
{
	int i,b=3;
	for(i=8;i<=38;i=i+b)
	{
		b=b+1;
		printf("%d\n",i);
		
	}
}

