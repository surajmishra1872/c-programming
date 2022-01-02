//8.	 Wap to find reverse of a given number.
#include<stdio.h>  
 int main()    
{    
	int n,i,reverse=0, rem;    
	printf("Enter a number: ");    
  	scanf("%d", &n);    
   
  for(n;n!=0; n=n/10)  
  {    
     rem=n%10;    
     reverse=reverse*10+rem;    
        
  }    
  printf("Reversed Number: %d",reverse);    
return 0;  
}   
