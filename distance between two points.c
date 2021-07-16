#include<stdio.h>
#include<math.h>
int main()
{
float x1,x2,y1,y2,distance;
printf(" \n enter the x and y coordinates of the points ;");
scanf("%f %f %f %f", &x1,&x2,&y1,&y2);
distance=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
printf(" distance between the points is : %f",distance);
}
