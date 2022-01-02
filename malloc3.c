//malloc
#include<stdio.h>
#include<stdlib.h>
void main()
{
 int n,i,*p;
 printf("Enter size of memory:");
 scanf("%d",&n);
 p=(int*)malloc(n*sizeof(int));
 p[n]=*p;
 for(i=0;i<n;i++)
 {
 printf("\nEnter the value of %d Element:",i);
 scanf("%d",&p[i]);	
 }
 for(i=0;i<n;i++)
 {
 printf("\nThe value of %d Element is:%d",i,p[i]);	
 }
}
