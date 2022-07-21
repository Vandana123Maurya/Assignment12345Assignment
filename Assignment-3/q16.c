#include<stdio.h>
#include<conio.h>
int main(){
int ch;
printf("Enter a character:");
scanf("%c",&ch);
if(ch>=65 && ch<=90 )
    printf("alphabet is uppercase");
else if(ch>=96 && ch<=122)
    printf("alphabet is lowercase");
else if(ch>='0' && ch<='9')
    printf("digits");
else
    printf("special character");
getch();
}


