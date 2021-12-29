#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n;
    clrscr();
    printf("Enter the number of columns");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
       {
           for(j=1;j<=i;j++)
              {
                 printf("%d",j);
               }
         printf("\n");
        }
        getch();
}
