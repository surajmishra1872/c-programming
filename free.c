//free memory
#include<stdio.h>
void main()
{
	int *ptr;
	ptr=malloc(4*sizeof(int));
	printf("%d\n",ptr);
	free(ptr);
	printf("%d",ptr);
	}
