#include<string.h>
#include<conio.h>
#include<stdio.h>

int main(){
int i,count=0;
char str[10],ch;
printf("Enter string:");
gets(str);
printf("Enter character:");
scanf("%c",&ch);
for(i=0;str[i];i++){
   if(str[i]==ch)
        count++;
}
printf("\'%c\' appears %d times in string",ch,count);

getch();
}
