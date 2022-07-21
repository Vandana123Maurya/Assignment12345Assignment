#include<stdio.h>
#include<conio.h>
int main(){
int ch;
printf("Enter a character:");
scanf("%c",&ch);
if(ch>=65 && ch<=90 )
    printf("alphabet is uppercase");
else
    printf("alphabet is lowercase");
getch();
}


