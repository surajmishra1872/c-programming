//count alphabate digit special
#include<stdio.h>
void main()
{int count=0,digit=0,special=0,i;
char n[100];
printf("enter a num");
gets(n);
for(i=0;i!='\0';i++)
{if(i>='A'&& i<='Z' || i>='a' && i<='z')
{count++;
}
else if(i>='1'&&i<='9')
{digit++;
}
else
{special++;
}
}
printf("total number of alphabete %d and total digit %d and special %d",count,digit,special);
}
