#include<string.h>
#include<conio.h>
#include<stdio.h>

int main(){
int i,count=0;
char str[20];
printf("Enter string:");
fgets(str,20,stdin);

for(i=0;str[i];i++){
   if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            count++;
}
printf("vowel:%d",count);

getch();
}
