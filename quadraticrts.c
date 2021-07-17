#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,discriminant,root1,root2,realpart,imgpart;
printf(" enter coefficients of a, b and c :");
scanf("%f %f %f",&a,&b,&c);
discriminant=b*b-4*a*c;
if(discriminant>0)
{
root1=(-b+ sqrt(discriminant))/(2*a);
root2=(-b- sqrt(discriminant))/(2*a);
printf("root1=%.2f and root2=%.2f",root1,root2);
}
else if (discriminant==0)
{
root1=root2=-b/(2*a);
printf(" root1=root2=%.2f :",root1);
}
else
{
realpart=-b/(2*a);
imgpart=sqrt(-discriminant)/(2*a);
printf("root1= %.2f+%.2f and root2=%.2f-%.2f",realpart,imgpart,realpart,imgpart);
}
return 0;
}
