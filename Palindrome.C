#include<stdio.h>
#include<conio.h>
void main()
{
   int n,rev=0,temp,r;
   clrscr();
   printf("Enter a number:");
   scanf("%d",&n);
   while(n!=0)
       {
          r=n%10;
          rev=rev*10+r;
          n=n/10;
       }
   if(rev==temp)
      {
         printf("It Is Palindrome");
       }
     else
        printf("It Is Not Palindrome");
      getch();
}
