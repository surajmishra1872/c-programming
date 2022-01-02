//sorting string
#include<stdio.h>
#include<string.h>
void main()
{
	int j,i;
	char temp;
char string[]="dcab";
int len=strlen(string);
printf("string Before shorting is:%s",string);
for(i=0;i<len-1;i++)
{
	for(j=i+1;j<len;j++)
	{
		if(string[i]>string[j])
		{
			temp=string[i];
			string[i]=string[j];
			string[j]=temp;
		}
	}
}
printf("\nstring Before shorting is:%s",string);
}
