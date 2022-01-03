#include<stdio.h>
#include<conio.h>
void main()
{
   int n,i,a[60];
   clrscr();
   printf("Enter the limit:");
   scanf("%d",&n);
   printf("Enter the elements:");
   for(i=0;i<n;i++)
      {
         scanf("%d",&a[i]);
      }
    printf("The Array Elements Are:");
    for(i=0;i<n;i++)
      {
        printf("%d",a[i]);
      }
    getch();
}
