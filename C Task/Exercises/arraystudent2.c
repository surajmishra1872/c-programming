//wap to store 3 subject marks of 5 student and print marks of only second students
#include<stdio.h>
void main()
{
	int marks[3][5],row,col,sum;
	for(row=0;row<=2;row++)
	{
		printf("Enter %d Student Numbers:\n",row);
		for(col=0;col<=4;col++)
		{
			scanf("%d",&marks[row][col]);
		}
		printf("\n");
	}
	for(row=0;row<=2;row++)
	{  sum=0;
		for(col=0;col<=4;col++)
		{
			sum=sum+marks[1][col];
		}
	    	printf("Total marks of %d Students is:%d\n",row,sum);
        }
}
