#include<string.h>
#include<conio.h>
#include<stdio.h>
void uppercaseString(char str[]);


int main(){
char str[30];
printf("Enter string:");
gets(str);
uppercaseString(str);

getch();
}
void uppercaseString(char str[]){
    int i,l;

for(i=0;str[i];i++){
    if(str[i]>=97 && str[i]<=122)
        str[i]-=32;
}
   printf("uppercase:%s",str);

}

