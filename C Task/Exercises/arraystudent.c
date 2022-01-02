//wap to store 3 subject marks of 5 student and print marks of only second students
#include<stdio.h>
void main()
{
	int marks[3][5],row,col,sum=0;
	for(row=0;row<=2;row++)
	{
		printf("Enter %d Student Numbers:\n",row);
		for(col=0;col<=4;col++)
		{
			scanf("%d",&marks[row][col]);
		}
		printf("\n");
	}
	printf("Numbers of Second Students is:\n");
		for(col=0;col<=4;col++)
		{
			sum=sum+marks[1][col];
		}
	    printf("%d",sum);
}
