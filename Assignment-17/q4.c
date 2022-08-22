#include<string.h>
#include<conio.h>
#include<stdio.h>

int main(){
int i;
char str[10];
printf("Enter string:");
gets(str);

for(i=0;str[i];i++){
   if(str[i]>=97 && str[i]<=122)
        str[i]-=32;
}
printf("Uppercase: %s",str);

getch();
}
