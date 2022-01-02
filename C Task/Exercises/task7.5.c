//Wap to input 5 subjects marks of 3 students and print division of all.
#include<stdio.h>
void main()
{
	int sub[5],i,sum=0,grade=0,j,k;
	for(j=1;j<=3;j++)
	{
	printf("Enter %d Student numbers:\n",j);	
	for(i=1;i<=5;i++)
	{
		printf("Enter %d Subject Number:\n",i);
		scanf("%d",&sub[i]);
	}
    
	for(k=1;k<=5;k++)
	{
	 sum=sum+sub[k];		
	}
	
	grade=sum*100/500;
	if(grade>=33 && grade<=50)
	{
	printf("Third Division");
		
    }
	if(grade>=51 && grade<=70)
	{
	printf("Second Division");
		
    }
	if(grade>=71)
	{
	printf("First Division.");
	
    }
	if(grade<=33)
	{
	printf("Fail\n");
	
    }
}
	
}
