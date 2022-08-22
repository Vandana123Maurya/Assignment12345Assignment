#include<string.h>
#include<conio.h>
#include<stdio.h>

int main(){
int i;
char str[10];
printf("Enter string:");
gets(str);

for(i=0;str[i];i++){
   if(str[i]>=65 && str[i]<=90)
        str[i]+=32;
}
printf("Lowercase:%s",str);

getch();
}
