#include<string.h>
#include<conio.h>
#include<stdio.h>
void lowercaseString(char str[]);


int main(){
char str[30];
printf("Enter string:");
gets(str);
lowercaseString(str);

getch();
}
void lowercaseString(char str[]){
    int i,l;

for(i=0;str[i];i++){
    if(str[i]>=65 && str[i]<=97)
        str[i]+=32;
}
   printf("lowercase:%s",str);

}

