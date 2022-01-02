#include <stdio.h>
void main()
{
int a, b, c, as, bs, cs, ac, bc, cc;

printf ("Enter any three numbers \n");
scanf ("%d%d%d",&a,&b,&c);
as=a*a;
bs=b*b;
cs=c*c;
ac=a*a*a;
bc=b*b*b;
cc=c*c*c;
printf ("Square of %d  is:%d\n",a,as);
 printf ("Square of %d  is:%d\n", b, bs);
 printf ("Square of %d  is:%d\n", c ,cs);
 printf ("Cube of %d  is:%d\n", a, ac);
 printf ("Cube of %d  is:%d\n", b, bc);
 printf ("Cube of %d  is:%d\n", c, cc);
 }

