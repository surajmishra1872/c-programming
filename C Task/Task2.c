// wap to convert minuts to the hours and remaining minuts
 #include<stdio.h>
 int main()
 {
 	int minut,a,c;
 	printf("Enter your value of Minut:");
 	scanf("%d",&minut);
 	a=minut/60;
 	c=minut%60;
 	printf("Total Hours is: %d and Minut is:%d",a,c);
 	
 }
