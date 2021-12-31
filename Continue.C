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
           if(i==8)
           continue;
           printf("%d\t",i);
        }
      getch();
}
