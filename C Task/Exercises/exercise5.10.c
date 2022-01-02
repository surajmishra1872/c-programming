//10)	Wap to read 10 number from keyboard and count number of positive 
//negative ,zeros are present here.
#include<stdio.h>
void main()
{
	int a,pcount=0,ncount=0,zcount=0,i;
	printf("Enter 10 Numbers:\n");
	for(i=1;i<=10;i++)
	{
	scanf("%d",&a);
	if(a>0)
	{
		pcount++;
	}
	if(a<0)
	{
		ncount++;
	}
	if(a==0)
	{
		zcount++;
	}
    }
printf("\nTotal Positive Number is:%d",pcount);
printf("\nTotal Negative Number is:%d",ncount);
printf("\nTotal Zero Number is:%d",zcount);
    
}
