#include<stdio.h>
#include<conio.h>
void main()
{
   int a=0,b=1,i,n,c,r,ch,sum=0,temp,rev=0,num;
   clrscr();
   while(ch!=5)
   {
   printf("...MENU..");
   printf("1.ARMSTRONG NUMBER OR NOT\n2.FIBONOCII SERIES\n3.PALINDROME OR NOT\n4.PREFECT OR NOT\n5.EXIT\n");
   printf("Enter your choice\n");
   scanf("%d",&ch);
   switch(ch)
    {
   case 1:
    printf("ARMSTRONG NUMBER OR NOT\n");
    printf("Enter any number\n");
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
             printf("%d is an Armstrong Number\n",temp);
          else
           printf("%d is not an Armstrong Number\n",temp);
          break;
     case 2:
        printf("FIBONACCI SERIES\n");
        printf("Enter the limit\n");
        scanf("%d",&n);
          for(i=1;i<=n;i++)
            {
               printf("%d\t",a);
               c=a+b;
               a=b;
               b=c;
             }
           break;
     case 3:
        printf("PALINDROME OR NOT\n");
        printf("Enter a number:\n");
        scanf("%d",&n);
          while(n!=0)
           {
             r=n%10;
             rev=rev*10+r;
              n=n/10;
            }
         if(rev==temp)
          {
             printf("It Is Palindrome\n");
          }
        else
              printf("It Is Not Palindrome\n");
            break;
       case 4:
          printf("PERFECT NUMBER OR NOT\n");
          printf("Enter the number\n");
          scanf("%d",&num);
           for(i=1;i<num;i++)
               {
                 if(num%i==0)
              {
                 sum=sum+i;
              }
          }
                if(sum==num)
               {
                  printf("%d is a perfect number\n",num);
                }
             else
                {
                   printf("%d is not a perfect number\n",num);
                 }
                break;
         case 5:
            printf("EXIT\n");
            break;
       }
     }
   getch();
}      


        
   

        
