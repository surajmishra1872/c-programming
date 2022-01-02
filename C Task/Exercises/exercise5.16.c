//wap to print sumof sqaure of all digits of a number
#include<stdio.h>  
 int main()    
{    
	int n,rem=0,sum=0;    
	printf("Enter a number: ");    
  	scanf("%d", &n);    
   
  for(n;n!=0; n=n/10)  
  {    
     rem=n%10;   
	 sum=sum+rem*rem; 
        
        
  } 
 printf("Total Sum of digits id:%d",sum) ;
  }  
