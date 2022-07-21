#include<stdio.h>
#include<conio.h>
int main(){
int year;
printf("Enter year");
scanf("%d",&year);
if(year%100==0)
{
    if(year%400==0)
        printf("%d is leap year",year);
    else
        printf("not leap year");
}
else
    {
    if(year%4==0)
        printf("%d is leap year",year);
     else
        printf("not leap year");
    }
    getch();
}
