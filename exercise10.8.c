/*
Wap to get NCR value of a number by using UDF
NCR=factorial of n/(factorial of r*factorial of (n-r))
n,r=5,3
ncr=120/6*2=10
int getFact(int num);
*/
#include<stdio.h>
int factn(int num)
{ 
 	int factn=1,i;
	for(i=1;i<=num;i++)
	{
		factn=factn*i;
	}
	return factn;
}
int factr(int r)
{ 
 	int factr=1,i;
	for(i=1;i<=r;i++)
	{
		factr=factr*i;
	}
	return factr;
}
int factnr(int num,int r)
{ 
 	int factnr=1,i,sub;
 	sub=num-r;
	for(i=1;i<=sub;i++)
	{
		factnr=factnr*i;
	}
	return factnr;
}
int getFact(int n)
{
	int r,resn,resnr,resr;
	
	printf("Enter  value of R for NCR:");
	scanf("%d",&r);
	resn=factn(n);
	resr=factr(r);
	resnr=factnr(n,r);
	printf("NCR Value is:%d",resn/(resr*resnr));
}
void main()
{
	int n;
printf("Enter value of N for NCR:");
scanf("%d",&n);	
getFact(n);
}
