#include<stdio.h>
#include<conio.h>
void main()
{
   int n,i,f=1;
   clrscr();
   printf("Enter a number:");
   scanf("%d",&n);
   for(i=n;i>0;i--)
     { 
        f=f*i;
      }
        printf("Factorial of %d = %d",n,f);
    getch();
}
