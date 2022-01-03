#include<stdio.h>
#include<conio.h>
void main()
{
   int l,n,i,a[50];
   clrscr();
   printf("Enter the limit:");
   scanf("%d",&n);
   printf("Enter the elements:");
   for(i=0;i<n;i++)
      {
         scanf("%d",&a[i]);
      }
         l=a[0];
         for(i=0;i<n;i++)
            {
               if(a[i]>l)
               l=a[i];
      }
    printf("Largest Array Element Is: %d",l);
    getch();
}
