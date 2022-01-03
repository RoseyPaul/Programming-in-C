#include<stdio.h>
#include<conio.h>
void main()
{
   int i,a[5];
   clrscr();
   printf("Enter the elements:\n");
   for(i=0;i<=5;i++)
       {
          scanf("%d",&a[i]);
        }
         printf("The Array Elements Are :\n");
        for(i=0;i<5;i++)
       {
     printf("%d\t",a[i]);
        }
      getch();
}
