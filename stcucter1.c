//structer
#include<stdio.h>
#include<string.h>
struct std{
	int rollno,clas,fees;
	char name[100];
}e1,e2;

void main()
{   
e1.clas=5;
e1.fees=200;
strcpy(e1.name,"Little Suraj");
e1.rollno=2;
printf("Student Details is:\n");
printf("Name is:%s and roll number is:%d ,class is:%d,fees is:%d",e1.name,e1.rollno,e1.clas,e1.fees);
}
