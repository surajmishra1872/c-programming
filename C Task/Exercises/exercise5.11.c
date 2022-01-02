//wap to print  digits all digits of number in seprate lines
#include<stdio.h>  
 int main()    
{    
	int num,rem=0;    
	printf("Enter a number: ");    
  	scanf("%d", &num);    
   
  for(num;num!=0; num=num/10)  
  {    
     rem=num%10;
	 printf("%d",rem);     
  }  
  }    
      
