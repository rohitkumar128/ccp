#include<stdio.h>
#include<conio.h>
void main()
{
float a,b,c;
void avg (float a,float b,float c);
printf(" enter the three numbers :");
scanf( "%f %f %f",&a,&b,&c);
avg(a,b,c);
getch();
}
void avg ( float a,float b,float c)
{
float average;
average=(a+b+c)/3.0;
printf("average=%f",average);
}
