//pointet  3
#include<stdio.h>
void main()
{
	int a,*j;
	printf("Enter a number:");
	scanf("%d",&a);
	printf("%d\n",a);
	j=&a;
	//*j=*j+10;
	*j=j+10;
	printf("%d\n",a);
	printf("%d\n",j+1);
	printf("%p\n",&j);
	printf("%d\n",&a);
	printf("%d\n",a);
	printf("%d\n",a);
}
