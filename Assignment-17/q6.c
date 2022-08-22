#include<string.h>
#include<conio.h>
#include<stdio.h>

int main(){
int i,j,t;
char str[20];
printf("Enter string:");
fgets(str,20,stdin);
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
getch();
}
