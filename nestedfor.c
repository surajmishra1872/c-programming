/*
nested loop:-
whenever a loop block is contained inside another loop block then the set 
of blocks looping all together are called as nested loops.
*********************************************************
Important point of the nested loops.
1.Every nested block insides a loop statement must be same family
2.Every nested block must executes atleast once ,then only we can say it is nested loops other wise 
they are just nested blocks written in a manner that they appear to be nested. 

for(i=0;i<10;i++)
{
for(j=0;j<10;j++)
{
}
}
Explaination:-Both syntax  appears to be nested in form of loop but they cannot be reagarded as 
nested loops.Why,beacuse the condition for the  outer loop become false ,hence no of iterations
for the outer loop becomes=0
inner loop iteration=0

*/

#include<stdio.h>
void main()
{
int i,j;
for(i=0;i<10;i++)
{
	printf("\n%d\n",i);	
	for(j=0;j<10;j++)
	{
	printf("%d",j);	
	}
}
}
