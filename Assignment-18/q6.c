#include<string.h>
#include<conio.h>
#include<stdio.h>
void alphanumaric(char str[]);


int main(){
char str[50];
printf("Enter string:");
gets(str);
alphanumaric(str);

getch();
}
void alphanumaric(char str[]){
    int i,a=0,n=0;

for(i=0;str[i];i++){
     if ((str[i]>= 'a' && str[i] <= 'z') || (str[i]>= 'A' && str[i] <= 'Z'))
             a=1;
      if(str[i]>='0'&& str[i]<='9')
             n=1;

}
if(a==1&&n==1)
     printf("%s is alphanumeric",str);
else
    printf("%s is not alphanumeric",str);

}

