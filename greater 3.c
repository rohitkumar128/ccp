#include<stdio.h>
int main()
{
float a,b,c;
printf("\n enter the three no.s :");
scanf("%f %f %f",&a,&b,&c);
if(a>=b && a>=c)
printf("%.2f is the largest number ", a );
if(b>=a && b>=c)
printf("%.2f is the largest number ", b );
else
printf("%.2f is the largest number ", c );
return 0;
}
