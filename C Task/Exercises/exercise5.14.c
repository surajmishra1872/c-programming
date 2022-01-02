//wap to check a number is pelindrome or not
#include<stdio.h>  
 int main()    
{    
	int n,reverse=0, rem;    
	printf("Enter a number: ");    
  	scanf("%d", &n);    
   
  for(n;n!=0; n=n/10)  
  {    
     rem=n%10;    
        
        
  }    
	if(n==rem)
	{
	printf("Pelindrome");
	} 
	else
	{
	printf("Not Pelindrome");
  	}  
  
} 
