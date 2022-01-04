#include<stdio.h>
#include<conio.h>
void main()
   {
     int a[50][50],n,m,i,j;
     clrscr();
     printf("Enter the number of rows and columns:");
     scanf("%d%d",&n,&m);
     printf("Enter the elements:\n");
     for(i=0;i<n;i++)
        {
           for(j=0;j<m;j++)
             {
                scanf("%d\t",&a[i][j]);
              }
         }
            printf("The Matrix:\n");
            for(i=0;i<n;i++)
              {
                for(j=0;j<m;j++)
                 {
                printf("%d\t",a[i][j]);
                  }
          printf("\n");
         }
      getch();
   }
