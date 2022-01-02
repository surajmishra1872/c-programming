#include<stdio.h>
void main()
{
	FILE *fp;
	char s[1000];
	fp=fopen("f1.txt","r");
	while(fgets(s,5,fp)!=NULL)
	{
		printf("%s\n",s);
	}
	fclose(fp);
}
