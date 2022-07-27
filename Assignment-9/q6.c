#include<stdio.h>
#include<conio.h>
int main(){
int year;
printf("Enter year:");
scanf("%d",&year);
    switch(year%100 == 0)
    {
     case 1:
          switch(year%400 == 0)
          {
           case 1:
               printf("year is leap year");
               break;
           case 0:
               printf("not leap year");
               break;
          }
          break;
    case 0:
         switch(year%4 == 0)
          {
           case 1:
               printf("year is leap year");
               break;
           case 0:
               printf("not leap year");
               break;
          }
    }



    getch();
}
