#include<stdio.h>
#include<conio.h>
void main()
{
   int i,n;
   clrscr();
   printf("Enter any number");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
        { 
           if(i==6)
           break;
           printf("%d\t",i);
        }
      getch();
}
