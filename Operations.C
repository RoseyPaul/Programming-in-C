#include<stdio.h>
#include<conio.h>
void create();
void display();
void insert();
void del();
int a[20],n;
void main()
{
  clrscr();
  int c;
  do
   {
     printf("Array Operations");
     printf("Operations:\n 1.Create\n 2.Insert\n 3.delete\n 4.display\n");
     printf("enter your choice:");
     scanf("%d",&c);
     switch(c)
      {
        case 1:
         create();
          break;
        case 2:
         insert();
         break;
        case 3:
         del();
          break;
        case 4:
         display();
          break;
         
         }
           while(c!=5);
  getch();
}
void create()
{
   int i=0;
   printf("ENTER THE NUMBER OF ELEMENTS:");
   scanf("%d",&n);
   printf("ENTER THE ELEMENTS:");
   while(i<=n-1)
      {
        scanf("%d",&a[i]);
         i++;
     printf("Created");
}
}
void insert ()
{ 
   int p,el,i;
    i=n;
    printf("Enter the position:");
    scanf("%d",&p);
    printf("Enter the elements:");
    scanf("%d",&el);
    while (i>=p)
      {
        a[i+1]=a[i];
          i=i-1;
}
n=n+1;
a[p]=el;
printf("%d is inserted:",el);
}
void del()
{
   int pos,i,item;
   printf("postion:");
   scanf("%d",&pos);
   i=pos;
   item=a[pos];
     while(i<=n-1)
       {
         a[i]=a[i+1];
         i++;
         }
          n=n-1;
         printf("%d is deleted",item);
}

void display ()
{
    int i;
   for(i=0;i<n;i++)
    {
       printf("%d\t",a[i]);
}
      }
   }
