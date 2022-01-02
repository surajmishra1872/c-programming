#include <stdio.h>

void main()
{
float qty, rate, net, dis=0;

printf ("\n Enter quantity");
scanf("%f", &qty);
printf ("\n Enter rate");
scanf("%f", &rate);
if(qty>=1000)
{
dis=10;
}
net = (qty*rate)-(qty*rate*dis/100);
printf ("The net amount to be pay is %f", net);
}

