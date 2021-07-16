#include<stdio.h>
int main()
{
int a,b,c,temp,smallest;
printf(" enter three numbers :");
scanf("%d%d%d",&a,&b,&c);
temp=(a<b) ? a:b;
smallest=(c<temp) ? c:temp;
printf(" smaller number is : %d",smallest);
return 0;
}
