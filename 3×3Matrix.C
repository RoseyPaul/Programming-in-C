#include<stdio.h>
#include<conio.h>
void main()
   {
     int a[3][3],i,j;
     clrscr();
     printf("Enter the elements:\n");
     for(i=0;i<3;i++)
        {
           for(j=0;j<3;j++)
             {
                scanf("%d\t",&a[i][j]);
              }
            printf("The Matrix:\n");
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
