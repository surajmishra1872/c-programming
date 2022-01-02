#include<stdio.h>
struct book{
	char name[50],auther[100];
	int id,price;
};
struct book input()
{
	struct book b;
	printf("Enter book name:");
	scanf("%s",&b.name);
	fflush(stdin);
	printf("\nEnter book Auther Name:");
	scanf("%s",&b.auther);
	printf("\nEnter Book id:");
	scanf("%d",&b.id);
	printf("\nEnter Book Price:");
	scanf("%d",&b.price);
	return(b);
}
void display(struct book b)
{
printf("\nName of Book is:%s\n Auther is:%s\n Book ID is:%d\n Price is:%d",b.name,b.auther,b.id,b.price);	
}
void main()
{
struct book b1;
b1=input();
display(b1);	
}
