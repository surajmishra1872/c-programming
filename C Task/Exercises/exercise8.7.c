//wap to input 10 elements of array and print only unique element of array

#include <stdio.h>
int main()
{
    int a[10],i,j,count;
    printf("Enter 10 elements of array:");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
    {
    	count=0;
    	for(j=i+1;j<=9;j++)
    	{
    		if(a[i]==a[j])
    		count++;
		}
		if(count==0)
		printf("%d  ",a[i]);
	}
}

