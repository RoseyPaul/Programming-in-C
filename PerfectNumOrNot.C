#include<stdio.h>
#include<conio.h>
void main()
{
    int num,sum=0,i;
    clrscr();
    printf("Enter the number");
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
               printf("%d is a perfect number",num);
             }
         else
             {
                printf("%d is not a perfect number",num);
              }
        getch();
}
