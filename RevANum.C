#include<stdio.h>
#include<conio.h>
void main()
{
   int rev=0,r,n;
   clrscr();
   printf("Enter the number");
   scanf("%d",&n);
   while(n!=0)
     {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
      }
        printf("The number in reverse=%d",rev);
     getch();
}
