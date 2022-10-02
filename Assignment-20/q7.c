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
   int i,v=0,c=0;
   for(i=0;str[i];i++)
   {
       if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        v++;
       else
        c++;
   }
   printf("total vowel %d and total consonant %d in %s",v,c,str);
 }
