#include<stdio.h>
#include<conio.h>

int main()
{
  char str[10];
  printf("Enter string:");
  gets(str);
  TotalVowelConsonant(str);
  getch();
}
 TotalVowelConsonant(char *str){
   int i,j,t;
  j=strlen(str)-1;
  i=0;
while(i<=j){
   t=str[i];
   str[i]=str[j];
   str[j]=t;
   j--;
   i++;
}
printf("%s",str);

 }
