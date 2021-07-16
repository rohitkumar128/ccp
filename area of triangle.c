#include<stdio.h>
#include<math.h>
float area_of_triangle(float,float,float);
int main()
{
float a,b,c,area;
printf("\n enter the three sides of triangle");
scanf("%f %f %f",&a,&b,&c);
area=area_of_triangle(a,b,c);
printf("area of triangle=%.2f",area);
return 0;
}
float area_of_triangle(float a,float b,float c)
{float s,area;
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
return area;
}
