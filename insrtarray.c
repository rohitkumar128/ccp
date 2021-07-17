#include <stdio.h>
 #include <conio.h>
 int main()
 {
      int i, n, num, pos, arr[10] ;

      printf("\n Enter the number of elements in the array:" );
      scanf("%d", &n);
    for(i=0;i<n;i++)
    {
       printf("\n Arr[%d] = :",i);
       scanf("%d", &arr [i]);
    }
      printf("\n Enter the number to be inserted:");
      scanf("%d",&num);
      printf("\n Enter the position at which the number has to be added:");
      scanf("%d", &pos);
    for(i=n;i>=pos;i--)
    {
      arr[i+1] = arr[i];
    }
      arr[pos] = num;
      n++;
      printf("\n The array after insertion  is: ",&num);
   for(i=0;i<n;i++)
   {
      printf (" \n Arr [%d]=%d",i,arr[i]);
   }
     getch();
     return 0;
 }
