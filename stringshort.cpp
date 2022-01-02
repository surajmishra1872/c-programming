//sorting string
#include<stdio.h>
void main();
char string[];
printf("Enter a string:");
string=gets();
int len=strlen(string);
for(i=0;i<=len;i++)
{
	for(j=i+1;j<=len;j++)
	{
		if(string[i]>string[j])
		{
			char temp=string[i];
			string[i]=string[j];
			string[j]=temp;
		}
	}
print("\nstring after shortig is:%s",string);
}
