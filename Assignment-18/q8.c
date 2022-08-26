#include<conio.h>
#include<stdio.h>
#include<string.h>
void checkPalin(char str[]);
int main(){
char str[30];
printf("Enter string:");
fgets(str,30,stdin);
checkPalin(str);
getch();
}
void checkPalin(char str[]){
int i,j,count=1;

for(i=0;str[i];i++)
{
   if(str[i]==32 && str[i+1]!=32){
    count++;
   }

}
printf("%d",count);
}
