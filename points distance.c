#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
float x1,x2,y1,y2,distance;
printf("\n enter the x cordinates and y cordinates of the points");
scanf("%f,%f,%f,%f",&x1,&x2,&y1,&y2);
distance=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
printf("\n distance=%f",distance);
return 0;
}
