#include<stdio.h>
#include<conio.h>
void main()
   {
     int a[2][3]={1,2,3,4,5,6},i,j;
     clrscr();
     printf("The 2×3 Matrix Is:\n");
     for(i=0;i<2;i++)
        {
           for(j=0;j<3;j++)
             {
                printf("%d\t",a[i][j]);
              }
          printf("\n");
         }
      getch();
   }
