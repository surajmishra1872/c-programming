//enumerates
//enum data type
#include<stdio.h>
enum boolean{
	false,true
};
enum boolean iseven(int x)
{
	if(x%2==0)
	return(true);
	else
return(false);
}
void main()
{
	int a;
	enum boolean result;
	
	printf("Enter a number:");
	scanf("%d",&a);
	result=iseven(a);
	if(result==true)
	{
		printf("YES it is Even.");
	}
	else
	{
		printf("Not Even It is Odd.");
	}
}


