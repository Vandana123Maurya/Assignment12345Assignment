#include<string.h>
#include<conio.h>
#include<stdio.h>
int findLength(char str[]);
int main(){
int t;
char str[30];
printf("Enter string:");
gets(str);
t=findLength(str);
printf("length of string:%d",t);
getch();
}


int findLength(char str[]){
    int i;
for(i=0;str[i];i++);
    return i;
}
