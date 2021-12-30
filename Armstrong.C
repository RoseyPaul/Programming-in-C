#include<stdio.h>
#include<conio.h>
void main()
{
   int n,c,r,sum=0,temp;
   clrscr();
   printf("Enter any number");
   scanf("%d",&n);
   temp=n;
   while(n!=0)
      {
         r=n%10;
         c=r*r*r;
         sum=sum+c;
         n=n/10;
       }
          if(sum==temp)
         {
             printf("%d is an Armstrong Number",temp);
          }
          else
           {
             printf("%d is not an Armstrong Number",temp);
           }
        getch();
}
            
