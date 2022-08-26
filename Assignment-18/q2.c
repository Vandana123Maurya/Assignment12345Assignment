#include<string.h>
#include<conio.h>
#include<stdio.h>
void reverseString(char str[]);

int main(){
char str[30];
printf("Enter string:");
gets(str);
reverseString(str);
getch();
}

void reverseString(char str[]){
    int i,j,t;
j=strlen(str)-1;
i=0;
while(i<=j){
   t=str[i];
   str[i]=str[j];
   str[j]=t;
   j--;
   i++;
}
printf(" %s",str);
}

