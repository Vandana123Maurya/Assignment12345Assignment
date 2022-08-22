#include<string.h>
#include<conio.h>
#include<stdio.h>

int main(){
int i;
char str[10];
printf("Enter string:");
gets(str);
for(i=0;str[i];i++);
printf("length is %d",i);
getch();
}
