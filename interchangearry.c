#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],max,min,maxpos,minpos,i,temp;
	printf("Enter 5 integers: ");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	max=a[0];
	min=a[0];
	maxpos=0;
	minpos=0;
	for(i=1;i<5;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			maxpos=i;
		}
		if(a[i]<min)
		{
			min=a[i];
			minpos=i;
		}
	}
	temp=a[maxpos];
	a[maxpos]=a[minpos];
	a[minpos]=temp;
	printf("After interchange array elemnts are: ");
	for(i=0;i<5;i++)
		printf("%d ",a[i]);
	getch();
}
\
