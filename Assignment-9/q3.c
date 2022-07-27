#include<conio.h>
#include<stdio.h>
void main(){
int ch;
printf("enter choice:");
scanf("%d",&ch);
switch(ch){
case 1:
    printf("* SUNDAY *\n");
    printf("May this SUNDAY bring all the good things in your life.\n");
    printf("May you have a fantastic week ahead.\n");

    break;
case 2:
    printf("* MONDAY *\n");
    printf("May your beginning of the week be the beginning of many good things too.\n");

    break;
case 3:
    printf("* TUESDAY *\n");
    printf("May your day be filled with positive things & God's blessings.\n");

    break;
case 4:
    printf("* WEDNESDAY *\n");
    printf("i wish you a very beautiful and lovely Wednesday morning.Wake up and enjoy the sun.\n");

    break;
case 5:
    printf("* THURSDAY *\n");
    printf("I wish you enjoy working because weekend is near after one more day.\n");

    break;
case 6:
    printf("* FRIDAY *\n");
    printf("A positive mind toword everything will give you a happier life.\n");

    break;
case 7:
    printf("* SATURDAY *\n");
    printf("Have a beautiful Saturday.\n");
;
    break;

default:
    printf("wrong choice");

}
getch();

}
