#include<stdio.h>
void main()
{   
	int i;
	char s[1000];
	FILE *fp;
	fp=fopen("f1.txt","w");
	if(fp==NULL)
	{
		printf("File is not Opening.");
		exit(1);
	}
	printf("Enter a string");
	gets(s);
	for(i=0;i<strlen(s);i++)
	 fputc(s[i],fp);
	getch();
	fclose(fp);
	getch();
	
}
