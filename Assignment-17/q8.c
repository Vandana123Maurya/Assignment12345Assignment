#include<string.h>
#include<conio.h>
#include<stdio.h>

int main(){
int i;
char str1[30],str2[30];
printf("Enter string:");
gets(str1);


for(i=0;str1[i];i++){
        str2[i]=str1[i];
}
str2[i]='\0';
printf("%s",str2);


getch();
}
