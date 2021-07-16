#include<stdio.h>
int main()
{
float cel,fah;
printf(" enter the temperature in fah :");
scanf("%f",&fah);
cel=(0.56)*(fah-32);
printf("%.2f fah = %.2f cel",fah,cel);
return 0;
}
