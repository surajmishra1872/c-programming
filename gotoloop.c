//loop using 
#include<stdio.h>
void main()
{
	int i=0;
	step1:
		if(i==11)
		{
			goto exit;
		}
		printf("Hello %d \n",i);
		i++;
		goto step1;
		exit:;
}
