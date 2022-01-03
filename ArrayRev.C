#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,a[70];
  clrscr();
  printf("Enter the limit:");
  scanf("%d",&n);
  printf("Enter the elements:");
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
     }
   printf("The array elements in reverse order are:");
   for(i=n-1;i>=0;i--)
     {
       printf("%d\t",a[i]);
      }
     getch();
    }
